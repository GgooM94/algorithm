#include<iostream>
#include<string>
#include<math.h>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	double res(0);
	cin >> str;

	switch (str[0])
	{
	case '0':
		if (str[1] == 'x') {
			for (int i = str.size() - 1; i > 1; i--) {
				if (str[i] > 96) {
					res += (str[i] - 87)*pow(16, str.size() - 1 - i);
				}
				else {
					res += (str[i] - '0')*pow(16, str.size() - 1 - i);
				}

			}
		}
		else {
			for (int i = str.size() - 1; i > 0; i--) {
				res += (str[i] - '0')*pow(8, str.size() - 1 - i);
			}
		}
		break;
	default:
		res = stoi(str);
		break;
	}
	cout << res;
}
