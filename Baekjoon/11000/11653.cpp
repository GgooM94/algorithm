#include<iostream>

void calc(int n) {
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			std::cout << i << "\n";
			calc(n / i);
			break;
		}
	}
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	calc(N);
}