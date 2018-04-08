#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> res(10);
	int i, N;
	for (i = 0; i < 10; i++) {
		res[i] = i % 5 + 1;
	}
	vector<int> arr(10);
	vector<int> cnt;
	cin >> N;
	for (int k = 1; k <= N; k++) {
		for (i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		if (res == arr)
			cnt.push_back(k);
	}
	for (i = 0; i <cnt.size(); i++) {
		cout << cnt[i] << "\n";
	}
}