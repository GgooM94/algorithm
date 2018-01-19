#include<iostream>
using namespace std;
int calculator(int N) {
	for (int i = 0; i <= (N / 3); i++) {
		int result = 0;
		for (int j = N / 5; j >= 0; j--) {
			result = 5 * j + 3 * i;
			if (result == N)
				return j + i;
		}
	}
	return -1;
}
int main() {
	int N;
	cin >> N;
	cout << calculator(N);
}
