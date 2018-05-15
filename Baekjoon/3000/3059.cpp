#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, sum, input;
	string str;
	cin >> T;
	while (T--)
	{
		input = sum = 0;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			input |= (1 << str[i] - 'A');
		}
		for (int i = 0; i < 26; i++) {
			if (!(input&(1 << i))) {
				sum += i + 'A';
			}
		}
		cout << sum << '\n';
	}
}