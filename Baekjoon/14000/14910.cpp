#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int input, tmp(-987654321);

	bool flag = false;
	while (cin >> input)
	{
		if (tmp > input) {
			flag = true;
		}
		tmp = input;
	}
	flag ? (cout << "Bad") : (cout << "Good");
}