#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int input;
	cin >> input;

	if (input % 4 == 0) {
		if (input % 100 == 0) {
			if (input % 400 == 0) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		else {
			cout << 1;
		}
	}
	else
		cout << 0;
}