#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, k, i, cnt(0);
	cin >> N >> k;
	int left(1), right(k), mid;
	while (left <= right)
	{
		cnt = 0;
		mid = (left + right) / 2;
		for (i = 1; i <= N; i++) {
			cnt += min(mid / i, N);
		}
		if (cnt < k)left = mid + 1;
		else right = mid - 1;
	}
	cout << left;
}