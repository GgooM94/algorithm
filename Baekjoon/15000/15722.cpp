#include<iostream>
using namespace std;

int main(void)
{
	int N, x(0), y(0);
	int moveX(1), moveY(1), cnt(0), index(3);
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, -1, 0, 1 };

	cin >> N;
	while (true)
	{
		for (int i = 0; i < moveX; i++) {
			x += dx[index];
			y += dy[index];
			cnt++;
			if (cnt == N) {
				cout << x << ' ' << y;
				return 0;
			}
		}
		moveX++;
		index++;
		index %= 4;

		for (int i = 0; i < moveY; i++) {
			x += dx[index];
			y += dy[index];
			cnt++;
			if (cnt == N) {
				cout << x << ' ' << y;
				return 0;
			}
		}
		moveY++;
		index++;
		index %= 4;

	}
}