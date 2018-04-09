#include<iostream>
int factorial(int n) {
	if (n < 5)return 0;
	return n / 5 + factorial(n / 5);
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	cout << factorial(N);
}