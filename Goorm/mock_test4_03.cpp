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

int main() {
	ios_base::sync_with_stdio(false);

	//모든 줄을 입력받아 준다
	vector<string> lines;
	vector<string> res;
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
				res.push_back(line.substr(index, j + 1 - index));
			}
		}
	}

	vector<MyStruct>arr;
	int cnt = 1;
	sort(res.begin(), res.end());
	res.push_back("@@@");

	for (int i = 0; i < res.size() - 1; i++) {
		if (res[i] == res[i + 1]) {
			cnt++;
		}
		else {
			MyStruct temp;
			temp.cnt = cnt;
			temp.s = res[i];
			arr.push_back(temp);
			cnt = 1;
		}
	}

	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < arr.size(); i++) {
		if (i == 100)
			break;
		cout << arr[i].s << '\n';
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

