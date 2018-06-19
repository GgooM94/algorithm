#include<iostream>
#include<algorithm>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int>arr(N);
	for (int i = 1; i <= N; i++) {
		arr[i - 1] = i;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
		if (i + 1 < N) {
			arr.push_back(arr[i + 1]);
			arr.erase(arr.begin());

		}
	}
}