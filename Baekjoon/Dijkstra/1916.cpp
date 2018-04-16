#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define MAXN 987654321
int N, M, i;
int u, v, w, start, finish;
int cost, lo, nextCo, nextLo;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	vector<vector<pair<int, int>>> arr(N + 1);
	vector<int>D(N + 1, MAXN);

	for (i = 0; i < M; i++) {
		cin >> u >> v >> w;
		arr[u].push_back(make_pair(v, w));
	}

	cin >> start >> finish;
	D[start] = 0;

	priority_queue<pair<int, int>> que;
	que.push(make_pair(D[start], start));

	while (!que.empty())
	{
		cost = -que.top().first;
		lo = que.top().second;
		que.pop();

		if (D[lo] > cost) continue;

		for (i = 0; i < arr[lo].size(); i++) {
			nextCo = cost + arr[lo][i].second;
			nextLo = arr[lo][i].first;

			if (D[nextLo] > nextCo) {
				D[nextLo] = nextCo;

				que.push(make_pair(-nextCo, nextLo));
			}
		}
	}
	cout << D[finish];
}