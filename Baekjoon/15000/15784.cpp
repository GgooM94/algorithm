#include<iostream>

int map[1001][1001];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, a, b;
	cin >> N >> a >> b;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	bool flag = false;
	for (int i = 0; i < N; i++) {
		if (map[a - 1][b - 1] < map[a - 1][i]) {
			flag = true;
		}
	}
	for (int i = 0; i < N; i++) {
		if (map[a - 1][b - 1] < map[i][b - 1]) {
			flag = true;
		}
	}

	flag ? (cout << "ANGRY") : (cout << "HAPPY");

}