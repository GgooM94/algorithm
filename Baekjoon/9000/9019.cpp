#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<string.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, A, B;
	int now, next;
	bool visit[10001] = { 0, };
	int from[10001] = { 0, };
	int how[10001] = { 0, };
	int dist[10001] = { 0, };
	queue<int>Q;
	cin >> T;

	for (int i = 0; i < T; i++) {
		memset(visit, false, sizeof(visit));
		memset(from, 0, sizeof(from));
		memset(how, 0, sizeof(how));
		memset(dist, 0, sizeof(dist));
		cin >> A >> B;
		Q.push(A);
		while (!Q.empty())
		{
			now = Q.front();
			Q.pop();

			next = (now * 2) % 10000;
			if (visit[next] == false) {
				visit[next] = true;
				Q.push(next);
				dist[next] = dist[now] + 1;
				from[next] = now;
				how[next] = 'D';
			}

			next = now - 1;
			if (next == -1) next = 9999;
			if (visit[next] == false) {
				visit[next] = true;
				Q.push(next);
				dist[next] = dist[now] + 1;
				from[next] = now;
				how[next] = 'S';
			}

			next = (now % 1000) * 10 + now / 1000;
			if (visit[next] == false) {
				visit[next] = true;
				Q.push(next);
				dist[next] = dist[now] + 1;
				from[next] = now;
				how[next] = 'L';
			}

			next = (now / 10) + (now % 10) * 1000;
			if (visit[next] == false) {
				visit[next] = true;
				Q.push(next);
				dist[next] = dist[now] + 1;
				from[next] = now;
				how[next] = 'R';
			}
		}

		string ans = "";
		while (B != A)
		{
			ans += how[B];
			B = from[B];
		}
		reverse(ans.begin(), ans.end());
		cout << ans << '\n';
	}
}