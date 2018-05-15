#include<iostream>
#include<algorithm>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, tot(0);
	cin >> N >> M;
	vector<int>set(M);
	vector<int>one(M);
	for (int i = 0; i < M; i++) {
		cin >> set[i] >> one[i];
	}

	sort(set.begin(), set.end());
	sort(one.begin(), one.end());

	tot += min(set[0], (N % 6)*one[0]);
	N -= N % 6;
	tot += min(set[0] * N / 6, N*one[0]);

	cout << tot;
}