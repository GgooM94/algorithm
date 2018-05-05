#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	string temp[8] = { "000","001","010","011","100","101","110","111" };

	bool flag = true;
	cin >> str;

	if (str.size() == 1 && str[0] == '0') {
		cout << 0;
	}
	for (int j = 0; j < 3; j++) {
		if (temp[str[0] - '0'][j] == '0' && flag)
			continue;
		cout << temp[str[0] - '0'][j];
		flag = false;
	}

	for (int i = 1; i < str.size(); i++) {
		cout << temp[str[i] - '0'];
	}
}