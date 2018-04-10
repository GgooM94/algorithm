#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K,i,tmpMin(987654321);

	int cnt(0);
	cin >> N >> K;
	vector<int> arr(N);
	vector<int>point(N);
	for (i = 0; i < N; i++)
		cin >> arr[i];

	for (i = 0; i < N; i++) {
		if (arr[i] == 1) {
			point[cnt] = i;
			cnt++;
			if (cnt >K - 1) {
				tmpMin = min(tmpMin, point[cnt - 1] - point[cnt - K] + 1);
			}
		}
	}
	if (cnt < K)
		cout << -1;
	else
		cout << tmpMin;
}