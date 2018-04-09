#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, i, tot(0);
	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	tot = arr[0];
	for (i = 1; i < N; i++) {
		arr[i] = arr[i] + arr[i - 1];
		tot += arr[i];
	}
	cout << tot;
}