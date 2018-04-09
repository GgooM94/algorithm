#include<iostream>
int factorial(int n) {
	if (n == 0) return 1;
	return n* factorial(n - 1);
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	cout << factorial(N);
}