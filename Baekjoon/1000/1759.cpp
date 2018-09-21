#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
vector<string>ans;

bool check(string &password) {
	int ja(0);
	int mo(0);

	for (char x : password) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			mo += 1;
		}
		else {
			ja += 1;
		}
	}
	return ja >= 2 && mo >= 1;
}

void sol(int n, vector<char> & alpha, string password, int i) {
	if (password.length() == n) {
		{
			if (check(password)) {
				ans.push_back(password);
			}
		}
		return;
	}

	if (i >= alpha.size()) return;
	sol(n, alpha, password + alpha[i], i + 1);
	sol(n, alpha, password, i + 1);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int L, C;
	char ch;
	vector<char>input;
	cin >> L >> C;

	for (int i = 0; i < C; i++) {
		cin >> ch;
		input.push_back(ch);
	}
	sort(input.begin(), input.end());
	sol(L, input, "", 0);


	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << '\n';
}