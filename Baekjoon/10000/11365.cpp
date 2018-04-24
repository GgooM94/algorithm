#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	getline(cin, str);
	while (str != "END")
	{
		for (int i = str.size() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << "\n";
		getline(cin, str);
	}
}