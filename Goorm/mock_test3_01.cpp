#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<long long>arr(N);


	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	long long minNum = arr[1] - arr[0];
	int index = 0;
	for (int i = 1; i < N - 1; i++) {
		if (minNum > arr[i + 1] - arr[i]) {
			minNum = arr[i + 1] - arr[i];
			index = i;
		}
	}

	cout << arr[index] << ' ' << arr[index + 1] << '\n';
}