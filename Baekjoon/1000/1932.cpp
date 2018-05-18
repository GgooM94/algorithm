#include<iostream>
#include<algorithm>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<int>map((N*(N + 1)) / 2 + 1);
	vector<int>DP((N*(N + 1)) / 2 + 1);
	for (int i = 1; i < map.size(); i++) {
		cin >> map[i];
	}

	int index(1), res(0);
	DP[1] = map[1];
	for (int i = 1; i <N; i++) {
		for (int j = 1; j <= i; j++) {
			DP[index + i] = max(DP[index + i], DP[index] + map[index + i]);
			DP[index + i + 1] = max(DP[index + i + 1], DP[index] + map[index + i + 1]);
			res = max(res, max(DP[index + i], DP[index + i + 1]));
			index++;
		}
	}
	cout << res;
}