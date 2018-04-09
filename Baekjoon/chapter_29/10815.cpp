#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, i;
	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	cin >> M;
	vector<int>input(M);
	for (i = 0; i < M; i++) {
		cin >> input[i];
	}

	int left(0), right(N), mid;
	for (i = 0; i < M; i++) {
		left = 0; right = N;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (arr[mid] == input[i]) {
				cout << 1 << " ";
				break;
			}
			else if (arr[mid] > input[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
		if (arr[mid] != input[i])
			cout << 0 << " ";
	}
}