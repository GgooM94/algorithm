#include<iostream>
#include<vector>
#include<algorithm>
int N,M, i;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cin >> M;

	long long left(1), right(arr[N-1]),mid, tot(0);
	while (left<=right)
	{
		tot = 0;
		mid = (left + right) / 2;
		for (i = 0; i < N; i++) {
			if (arr[i] <= mid)
				tot += arr[i];
			else
				tot += mid;
		}
		if (tot <= M) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << right;
}