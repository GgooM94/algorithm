#include<iostream>
#include<algorithm>
#define MAXN 987654321

int map[101][101] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	int st, en, cost;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)continue;
			map[i][j] = MAXN;
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> st >> en >> cost;
		map[st - 1][en - 1] = min(map[st - 1][en - 1], cost);
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == MAXN)
				cout << 0 << " ";
			else
			{
				cout << map[i][j] << " ";
			}

		}
		cout << "\n";
	}
}
