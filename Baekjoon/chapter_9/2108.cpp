#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
int N, i, cntMax(0),secMax(0);
bool flag = false;
double tot(0);
int cnt[8001] = { 0 };
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	vector<int>arr(N);

	for (i = 0; i < N; i++) {
		cin >> arr[i];
		tot += arr[i];
		cnt[arr[i] + 4000]++;
	}
	sort(arr.begin(), arr.end());
	secMax = arr[0];
	for (i = 1; i < 8001; i++) {
		if (cnt[i] > cnt[cntMax]) {
			cntMax = i;
			flag = true;
		}
		else if(cnt[i] ==cnt[cntMax] && flag == true) {
			secMax = i;
			flag = false;
		}
	}
	
	cout << (int)floor(tot / N + 0.5) << "\n";
	cout << arr[N / 2] << "\n";
	cout << (flag ? cntMax-4000 : secMax-4000) << "\n";
	cout << arr[N - 1] - arr[0] << "\n";
}