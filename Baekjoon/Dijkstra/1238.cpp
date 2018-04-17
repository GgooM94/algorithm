#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define MAXN 987654321

int N, M, X,i,j;
int u, v, w;
int resMax(-1);
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> X;
	vector<vector<pair<int, int>>>arr(N + 1);
	vector<int>tmp(N + 1);

	for (i = 0; i < M; i++) {
		cin >> u >> v >> w;
		arr[u].push_back(make_pair(v, w));
	}
	priority_queue<pair<int, int>>que;

	for (i = 1; i <= N; i++) {
		vector<int>D(N + 1, MAXN);	
		D[i] = 0;
		que.push(make_pair(D[i], i));
		while (!que.empty())
		{
			int cost = -que.top().first;
			int lo = que.top().second;
			que.pop();

			if (D[lo] < cost) continue;

			for (j = 0; j < arr[lo].size(); j++) {
				int nextCo = cost + arr[lo][j].second;
				int nextLo = arr[lo][j].first;
				if (D[nextLo] > nextCo) {
					D[nextLo] = nextCo;
					que.push(make_pair(-nextCo, nextLo));
				}
			}
		}
		tmp[i] = D[X];
	}

	vector<int>D(N + 1, MAXN);
	D[X] = 0;
	que.push(make_pair(D[X], X));
	while (!que.empty())
	{
		int cost = -que.top().first;
		int lo = que.top().second;
		que.pop();

		if (D[lo] < cost) continue;

		for (j = 0; j < arr[lo].size(); j++) {
			int nextCo = cost + arr[lo][j].second;
			int nextLo = arr[lo][j].first;
			if (D[nextLo] > nextCo) {
				D[nextLo] = nextCo;
				que.push(make_pair(-nextCo, nextLo));
			}
		}
	}
	for (i = 1; i <= N; i++) {
		tmp[i] += D[i];
		resMax = max(resMax, tmp[i]);
	}	
	cout << resMax;
}
