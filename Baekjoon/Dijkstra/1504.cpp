#include<iostream>
#include<vector>
#include<queue>
#define MAXN 987654321
typedef long long ll;
using namespace std;
int N, E,i,j;
int a, b, c;
ll Dijkstra(const int& a, const int& b);
ll res;

ll myMin(const long long &a, const long long& b) {
	if (a <= b)
		return a;
	return b;

}
vector<vector<pair<int, int>>> arr;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> E;
	arr.resize(N + 1);

	for (i = 0; i < E; i++) {
		cin >> a >> b >> c;
		arr[a].push_back(make_pair(b, c));
		arr[b].push_back(make_pair(a, c));
	}

	int p1, p2;
	cin >> p1>> p2;

	res = myMin(Dijkstra(1, p1) + Dijkstra(p1, p2) + Dijkstra(p2, N), Dijkstra(1, p2) + Dijkstra(p2, p1) + Dijkstra(p1, N));

	if (res >= MAXN)
		cout << -1;
	else
		cout << res;

}
ll Dijkstra(const int& a, const int& b) {

	vector<int>D(N + 1, MAXN);
	D[a] = 0;
	priority_queue<pair<int, int>>que;
	que.push(make_pair(D[a], a));

	while (!que.empty())
	{
		int cost = -que.top().first;
		int lo = que.top().second;
		que.pop();

		if (D[lo] < cost) continue;

		for (i = 0; i<arr[lo].size(); i++) {
			int nextCo = cost + arr[lo][i].second;
			int nextLo = arr[lo][i].first;

			if (D[nextLo] > nextCo) {
				D[nextLo] = nextCo;
				que.push(make_pair(-nextCo, nextLo));
			}
		}
	}
	return D[b];
}