#include<iostream>
int factorial(int n) {
	if (n == 0) return 1;
	int temp(n);
	for (int i = n - 1; i > 0; i--) {
		temp *= i;
	}
	return temp;
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	cout << factorial(N) / (factorial(N - K)*factorial(K));
}