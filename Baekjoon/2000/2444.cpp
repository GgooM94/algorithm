#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N - i; j > 0; j--) {
			cout << ' ';
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int k = 0; k < 2 * (N - i) - 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}
}