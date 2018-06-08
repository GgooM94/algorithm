#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int res(135519);
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (!(res & (1 << (str[i] - 'A'))))
			cout << str[i];
	}
}