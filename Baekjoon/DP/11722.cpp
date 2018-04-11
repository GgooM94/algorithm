#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int DP[1001];
	int N, i, j,lengthMax(1);
	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	DP[N - 1] = 1;
	if(N>1){
		for (i = N-2; i >=0; i--) {
			DP[i] = 1;
			for (j = N-1; j > i; j--) {
				if (arr[j] < arr[i])
					DP[i] = max(DP[i], DP[j] + 1);
			}
			lengthMax = max(lengthMax, DP[i]);
		}
	}
	cout << lengthMax;
}