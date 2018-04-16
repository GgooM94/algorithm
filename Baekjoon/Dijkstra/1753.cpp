#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define INF 987654321

int V, E, K;
int u, v, w;
int i, j;

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> V >> E >> K;

	vector<vector<pair<int, int>>> arr(V + 1);
	vector<int> D(V + 1, INF);
	D[K] = 0;

	for (i = 0; i < E; i++) {
		cin >> u >> v >> w;
		arr[u].push_back(make_pair(v, w));
	}

	priority_queue<pair<int, int>>que;
	que.push(make_pair(D[K], K));	//우선 순위큐, 시작점 대입

	while (!que.empty())
	{
		int cost = -que.top().first;		//C++ 우선순위큐의 기본 설정값은 내림차순 이므로 -를 넣어 바꿔준다.
		int lo = que.top().second;
		que.pop();

		if (D[lo] < cost)continue;		//D[lo]값보다 cost가 클경우에는 연산이 불필요하다.

		for (i = 0; i < arr[lo].size(); i++) {
			int nextCo = cost + arr[lo][i].second;
			int nextLo = arr[lo][i].first;

			if (D[nextLo] > nextCo) {
				D[nextLo] = nextCo;
				que.push(make_pair(-nextCo, arr[lo][i].first));
			}
		}
	}
	for (i = 1; i <= V; i++) {
		if (D[i] == INF)
			cout << "INF\n";
		else
			cout << D[i] << "\n";
	}
}