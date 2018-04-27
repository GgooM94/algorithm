#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, k;
	cin >> a >> b >> k;

	if ((k - a) % b != 0 || (k - a) / b <0) {
		cout << "X";
	}
	else {
		cout << abs((k - a) / b) + 1;
	}
}