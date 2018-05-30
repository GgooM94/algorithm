#include<iostream>

int map[10][10] = { 0 , };
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int X, Y;
	int	dir = 0;
	cin >> X >> Y;

	for (int i = 1; i <= Y; i++) {
		for (int j = 1; j <= X; j++) {
			map[i][j] = -1;
		}
	}
	int x = 1;
	int y = 1;
	for (int i = 0; i < X*Y; i++) {
		map[y][x] = i;
		if (map[y + dy[dir]][x + dx[dir]] != -1) {
			dir++;
			dir %= 4;
		}
		y += dy[dir];
		x += dx[dir];
	}
	for (int i = 1; i <= Y; i++) {
		for (int j = 1; j <= X; j++) {
			cout << map[i][j] << '\t';
		}
		cout << endl;
	}
}