#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	int N;
	cin >> N;
	string str;
	int result(0);
	while (N--)
	{
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(')
				result++;
			else
				result--;
			if (result < 0) {
				cout << "NO\n";
				break;
			}
		}
		if (result == 0)
			cout << "YES\n";
		else if(result >0)
			cout << "NO\n";
		result = 0;
	}
}