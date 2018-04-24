#include<iostream>
#include<string>
#include<cctype>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (isupper(str[i]))
			cout << str[i];
	}
}