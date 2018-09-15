#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;

	map<string, string> p;

	int uidBegin(0), uidEnd(0);
	string uid;
	string name;
	int index(0);


	for (int i = 0; i < record.size(); i++) {
		bool uidInsert = false;
		if (record[i][0] == 'E' || record[i][0] == 'C') {
			uidInsert = true;
		}

		uidBegin = uidEnd = index = 0;
		if (uidInsert) {
			for (int j = 1; j < record[i].size(); j++) {
				if (record[i][j] == ' ') {
					if (uidBegin == 0) {
						uidBegin = j + 1;
					}
					else {
						uid = record[i].substr(uidBegin, j - uidBegin);
						index = j + 1;
					}
				}
				else if (j == record[i].size() - 1) {
					name = record[i].substr(index, j - index + 1);
				}
			}

			if (p.find(uid) == p.end()) {
				p.insert(make_pair(uid, name));
			}
			else {
				p.erase(uid);
				p.insert(make_pair(uid, name));
			}

		}
	}
	for (int i = 0; i < record.size(); i++) {
		string temp;
		uidBegin = uidEnd = 0;
		for (int j = 1; j < record[i].size(); j++) {
			if (record[i][j] == ' ') {
				if (uidBegin == 0) {
					uidBegin = j + 1;
				}
				else {
					uid = record[i].substr(uidBegin, j - uidBegin);
					index = j + 1;
				}
			}
		}
		if (record[i][0] == 'L')
		{
			uid = record[i].substr(uidBegin, record[i].size() - uidBegin);
		}
		switch (record[i][0])
		{
		case 'E':
			temp = p.find(uid)->second + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
			answer.push_back(temp);
			break;

		case 'L':
			temp = p.find(uid)->second + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
			answer.push_back(temp);
			break;
		case 'C':
			break;
		default:
			break;
		}
	}

	return answer;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<string>temp(5);
	temp[0] = "Enter uid1234 Muzi";
	temp[1] = "Enter uid4567 Prodo";
	temp[2] = "Leave uid1234";
	temp[3] = "Enter uid1234 Prodo";
	temp[4] = "Change uid4567 Ryan";
	solution(temp);


}
