#include<iostream>
using namespace std;

bool visit[1001] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K, cnt(0);
	cin >> N >> K;
	visit[1] = 1;
	int k(0), i(0);
	while (1) {
		for (i = 1; i <= N; i++) {
			if (visit[i] == 0)
				break;
		}
		for (k = i; k <= N; k += i) {
			if (visit[k] == 0) {
				visit[k] = 1;
				cnt++;
				if (cnt == K) {
					cout << k;
					return 0;
				}
			}
		}
	}
}