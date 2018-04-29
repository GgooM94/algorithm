#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	vector<string> arr;
	cin >> N >> M;

	arr.resize(N + M);
	for (int i = 0; i < N + M; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	vector<string>res;
	int sum(0);
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			res.push_back(arr[i]);
			sum++;
		}
	}

	cout << sum << "\n";
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << "\n";
}