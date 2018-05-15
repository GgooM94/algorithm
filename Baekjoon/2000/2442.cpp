#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N - i; j > 0; j--)
			cout << ' ';
		for (int k = 0; k < i * 2 - 1; k++)
			cout << '*';
		cout << '\n';
	}
}