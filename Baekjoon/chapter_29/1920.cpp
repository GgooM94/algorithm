#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M, i, input;
	cin >> N;
	vector<int> arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	cin >> M;
	while (M--)
	{
		cin >> input;

		int start(0), end(arr.size() - 1), mid;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (arr[mid] == input) break;
			else if (arr[mid] > input) end = mid - 1;
			else start = mid + 1;
		}
		if (arr[mid] == input) cout << 1 << "\n";
		else cout << 0 << "\n";
	}
}