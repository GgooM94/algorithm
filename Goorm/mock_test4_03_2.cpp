#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<ctype.h>
using namespace std;

#define LF "\n"

/** 이미 작성된 코드들은 사용하지 않아도 무관합니다.
** 필요하다면 수정/삭제하고 스스로 작성하세요.
*/


/** 입력으로 주어진 모든 줄들을 입력받아 벡터에 채워주는 반환해주는 함수 **/
void readAllLines(vector<string> &lines);


struct MyStruct
{
	string s;
	int cnt;
	int index;
	vector<int>layer;
};

struct Input
{
	string s;
	int index;
};
bool cmp(const MyStruct& a, const MyStruct& b) {

	if (a.cnt > b.cnt) {
		return true;
	}
	else if (a.cnt == b.cnt) {
		return a.s < b.s;
	}
	else
		return false;
}

bool compare(const Input& a, const Input& b) {
	return a.s < b.s;
}
int main() {
	ios_base::sync_with_stdio(false);

	//모든 줄을 입력받아 준다
	vector<string> lines;
	vector<Input> res;
	readAllLines(lines);

	for (int i = 0; i < lines.size(); i++) {
		for (int j = 0; j < lines[i].size(); j++) {
			if (isalpha(lines[i][j])) {
				lines[i][j] = tolower(lines[i][j]);
			}
		}
	}

	bool isStart;
	int index;
	for (int i = 0; i < lines.size(); i++) {
		string line = lines[i] + " ";
		isStart = false;
		index = 0;
		for (int j = 0; j < lines[i].size(); j++) {

			if (isStart == false && isalpha(line[j])) {
				isStart = true;
				index = j;
			}

			if (isStart == true && !isalpha(line[j + 1])) {
				isStart = false;
				Input temp;
				temp.s = line.substr(index, j - index + 1);
				temp.index = i + 1;
				res.push_back(temp);
			}
		}
	}

	vector<MyStruct>arr;
	int cnt = 1;
	stable_sort(res.begin(), res.end(), compare);

	Input temp;
	temp.s = "@@@";
	temp.index = 0;
	res.push_back(temp);

	vector<int>l;
	for (int i = 0; i < res.size() - 1; i++) {
		if (res[i].s == res[i + 1].s) {
			cnt++;
			if (!l.empty() && l.back() == res[i].index)
				continue;
			l.push_back(res[i].index);
		}
		else {
			if (l.empty())
				l.push_back(res[i].index);
			else {
				if (l.back() != res[i].index)
					l.push_back(res[i].index);
			}

			MyStruct temp;
			temp.cnt = cnt;
			temp.s = res[i].s;
			temp.layer = l;
			arr.push_back(temp);
			l.clear();
			cnt = 1;
		}
	}
	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < arr.size(); i++) {
		if (i == 100)
			break;
		cout << arr[i].s << ' ';

		if (arr[i].layer.size() > 10) {
			for (int j = arr[i].layer.size() - 10; j < arr[i].layer.size(); j++) {
				cout << arr[i].layer[j] << ' ';
			}
		}
		else {
			for (int j = 0; j < arr[i].layer.size(); j++) {
				cout << arr[i].layer[j] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}


void readAllLines(vector<string> &lines)
{
	lines.clear();
	std::string line;
	while (std::getline(std::cin, line))
	{
		line.push_back(' ');
		lines.push_back(line);
	}
}

