#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long A, B, C;
	cin >> A >> B >> C;

	if ((A + B) >= 2 * C) {
		cout << A + B - (2 * C);
	}
	else {
		cout << A + B;
	}

}