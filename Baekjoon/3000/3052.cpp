#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<long long> arr(10);
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] %= 42;
	}
	sort(arr.begin(), arr.end());

	int cnt(0), i, j;
	long long temp;
	for (i = 0; i < arr.size();) {
		temp = arr[i];
		for (j = i + 1; j < arr.size(); j++) {
			if (temp != arr[j])
				break;
		}
		i = j;
		cnt++;
	}
	cout << cnt;
}