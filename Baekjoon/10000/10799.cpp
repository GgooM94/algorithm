#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;
	int cnt(0), sum(0);

	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == '(' && str[i + 1] == ')') {
			sum += cnt;
			i++;
		}
		else if (str[i] == '(' && str[i + 1] != ')') {
			cnt++;
		}
		else if (str[i] == ')') {
			sum++;
			cnt--;
		}
	}

	if (str[str.size() - 1] == ')' && str[str.size() - 2] != '(')
		sum++;
	cout << sum;
}