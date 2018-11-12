#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(vector<vector<int>> baseball) {
	int answer = 0;
	vector<string> temp;
	for (int i = 123; i<988; i++) {
		if (i / 100 == (i - i / 100 * 100) / 10 || i / 100 == (i - i / 100 * 100) % 10 || (i - i / 100 * 100) / 10 == (i - i / 100 * 100) % 10)
			continue;
		if (i / 100 == 0 || (i - i / 100 * 100) / 10 == 0 || (i - i / 100 * 100) % 10 == 0)
			continue;
		temp.push_back(to_string(i));
	}

	int res = 0;
	int cnt = 0;
	int s, b;
	for (int i = 0; i < temp.size(); i++) {
		cnt = 0;

		for (int j = 0; j < baseball.size(); j++) {
			s = b = 0;
			if (temp[i][0] == to_string(baseball[j][0])[0])
				s++;

			if (temp[i][1] == to_string(baseball[j][0])[1])
				s++;

			if (temp[i][2] == to_string(baseball[j][0])[2])
				s++;

			if (temp[i][0] == to_string(baseball[j][0])[1] || temp[i][0] == to_string(baseball[j][0])[2])
				b++;

			if (temp[i][1] == to_string(baseball[j][0])[0] || temp[i][1] == to_string(baseball[j][0])[2])
				b++;


			if (temp[i][2] == to_string(baseball[j][0])[0] || temp[i][2] == to_string(baseball[j][0])[1])
				b++;

			if (s != baseball[j][1] || b != baseball[j][2])
				continue;

			cnt++;

			if (cnt == baseball.size()) {
				answer++;
			}
		}
	}
	return answer;
}

int main() {
	vector<vector<int>>arr(4, vector<int>(3));
	arr[0] = { 123,1,1 };
	arr[1] = { 356,1,0 };
	arr[2] = { 327,2,0 };
	arr[3] = { 489,0,1 };

	cout << solution(arr);
}