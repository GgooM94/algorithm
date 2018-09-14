#include<iostream>
int count(int n, int k) {
	if (n == 0)return 0;
	if (n == k) return 1;

	if (2 * k <= n) {
		return 2 + count(n - 2 * k, k + 1);
	}
	else if (k <= n) {
		return 1 + count(n - k, k + 1);
	}
	else {
		return count(n, k - 1);
	}
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int start, end;
	cin >> T;
	while (T--)
	{
		cin >> start >> end;
		cout << count(end - start, 1) << '\n';
	}
}