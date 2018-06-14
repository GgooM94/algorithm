#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<int>arr(5);
	int sum(0);
	while (N--)
	{
		sum = 0;
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());

		if ((arr[3] - arr[1]) >= 4) {
			cout << "KIN\n";
		}
		else {
			for (int j = 1; j < 4; j++) {
				sum += arr[j];
			}
			cout << sum << "\n";
		}
	}
}