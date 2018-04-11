#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, i;
	int tmpMax(INT16_MIN),sum(0);
	cin >> N;
	vector<int>arr(N);
	
	for (i = 0; i < N; i++) {
		cin >> arr[i];
		if (i == 0)
			arr[i] = arr[i];
		else {
			arr[i] = max(arr[i] + arr[i - 1], arr[i]);
		}

		tmpMax = max(tmpMax, arr[i]);
	}
	cout << tmpMax;
}