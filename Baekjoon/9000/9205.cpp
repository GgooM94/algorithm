#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<memory.h>
#define VISIT 1
using namespace std;

int t, n, x, y, i;
bool visit[102] = { 0 };
vector<pair<int, int>> arr;
queue<pair<int, int>>Q;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	bool flag = false;
	cin >> t;
	while (t--)
	{
		arr.clear();
		flag = false;
		memset(visit, 0, sizeof(visit));

		cin >> n;
		for (i = 0; i < n + 2; i++) {
			cin >> x >> y;
			arr.push_back(make_pair(x, y));
		}

		Q.push(arr[0]);

		while (!Q.empty())
		{
			int dx = Q.front().first;
			int dy = Q.front().second;

			Q.pop();

			if (dx == arr[n+1].first && dy == arr[n + 1].second) {
				flag = VISIT;
				break;
			}
		
			for (i = 1; i < arr.size(); i++) {
				int nx = arr[i].first;
				int ny = arr[i].second;
				int dist = abs(nx - dx) + abs(ny - dy);

				if (dist <= 1000 && visit[i] ==0) {
					Q.push(arr[i]);
					visit[i] = 1;
				}
			}
		}
		flag ? (cout << "happy\n") : (cout << "sad\n");
	}
}