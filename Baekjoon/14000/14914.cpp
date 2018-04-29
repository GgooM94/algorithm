#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= a; i++) {
		if (a%i == 0 && b%i == 0) {
			cout << i << " " << a / i << " " << b / i << "\n";
		}
	}
}