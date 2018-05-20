#include<iostream>
int main() {
	using namespace std;
	ios::sync_with_stdio(false);

	int N, left, right, res(1);
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> left >> right;
		if (left == res) {
			res = right;
		}
		else if (right == res) {
			res = left;
		}
	}
	cout << res;
}