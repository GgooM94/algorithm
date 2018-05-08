#include<iostream>
#include<algorithm>
#include<vector>

typedef long long ll;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<ll>arr(N);
	vector<ll>LIS;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	LIS.push_back(arr[0]);

	for (int i = 1; i < N; i++) {
		if (LIS.back() < arr[i]) {
			LIS.push_back(arr[i]);
		}
		else {
			*lower_bound(LIS.begin(), LIS.end(), arr[i]) = arr[i];
		}
	}
	cout << LIS.size();
}