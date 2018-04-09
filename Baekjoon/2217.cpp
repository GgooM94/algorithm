#include<iostream>
#include<vector>
#include<algorithm>
bool descending(const int &a, const int &b) {
	return a > b;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,i,tmpMax(0);
	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(),descending);
	tmpMax = arr[0];
	for (i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (i = 1; i < N; i++) {
		cout << i<< " " <<arr[i] * (i + 1) << " " << tmpMax << endl;
		tmpMax = max(arr[i] * (i + 1), tmpMax);
	}
	cout << tmpMax;
}