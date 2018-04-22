#include<iostream>
#include<string>
using namespace std;
int N;
string str;
bool flag = false;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	cin.ignore();
	while (N--)
	{
		getline(cin, str);
		cout << "god";
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ')
				flag = true;
			if (flag && str[i] != ' ') {
				cout << str[i];
			}
		}
		cout << "\n";
		flag = false;
	}
}
