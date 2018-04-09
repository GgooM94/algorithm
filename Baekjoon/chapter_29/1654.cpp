#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long left(0), right(LLONG_MAX), mid;
	int K, N, i, tot;
	cin >> K >> N;

	vector<long long> arr(K);
	for (i = 0; i < K; i++)
		cin >> arr[i];

	while (left <= right)
	{
		tot = 0;
		mid = (left + right) / 2;
		for (i = 0; i < K; i++) {
			tot += arr[i] / mid;
		}
		if (tot >= N)
			left = mid + 1;
		else right = mid - 1;

	}
	cout << right;
}