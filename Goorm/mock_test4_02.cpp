#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		string str;
		string temp;
		cin >> str;

		for (int j = 0; j < str.size(); j++) {
			switch (str[j])
			{
			case '(':
			case ')':
			case '{':
			case '}':
			case '[':
			case ']':
				temp += str[j];
				break;
			default:
				continue;
			}
		}
		if (temp.size() == 0) {
			cout << "YES\n";
			continue;
		}
		if (temp.size() % 2 == 1) {
			cout << "NO\n";
			continue;
		}

		int test = temp.size() / 2;
		for (int j = 0; j < test; j++) {
			if (temp.find("()") < temp.size()) {
				temp.erase(temp.find("()"), 2);
			}
			else if (temp.find("[]") < temp.size()) {
				temp.erase(temp.find("[]"), 2);
			}
			else if (temp.find("{}") < temp.size()) {
				temp.erase(temp.find("{}"), 2);
			}
		}

		if (temp.size() == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}