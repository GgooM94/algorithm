#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, res;
	cin >> A >> B;
	res = A*B;
	for (int i = 0; i < 3; i++) {
		cout << A*(B % 10) << '\n';
		B /= 10;
	}
	cout << res;
}