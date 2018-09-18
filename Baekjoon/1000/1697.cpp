#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
	int N, K;
	bool visit[100001] = { 0 };
	int ans[100001] = { 0, };
	queue<int>Q;
	cin >> N >> K;
	visit[N] = true;
	ans[N] = 0;

	Q.push(N);
	while (!Q.empty())
	{
		int now = Q.front();
		Q.pop();
		for (int i = 0; i < 3; i++) {
			int copyNow = now;
			if (i == 0)copyNow -= 1;
			else if (i == 1)copyNow += 1;
			else copyNow *= 2;

			if (copyNow >= 0 && copyNow <= 100000) {
				if (visit[copyNow] == false) {
					visit[copyNow] = true;
					Q.push(copyNow);
					ans[copyNow] = ans[now] + 1;
				}
			}
		}
	}
	cout << ans[K];
}