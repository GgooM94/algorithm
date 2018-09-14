#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	vector<int>arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int res = -1;
	do {
		int sum(0);
		for (int i = 1; i < arr.size(); i++) {
			sum += abs(arr[i - 1] - arr[i]);
		}
		res = max(res, sum);

	} while (next_permutation(arr.begin(), arr.end()));

	cout << res;
}