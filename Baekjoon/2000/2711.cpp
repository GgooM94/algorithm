#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, index;
	string str;
	cin >> N;
	while (N--)
	{
		cin >> index >> str;
		for (int i = 0; i < str.size(); i++) {
			if (i == index - 1)continue;
			cout << str[i];
		}
		cout << '\n';
	}
}