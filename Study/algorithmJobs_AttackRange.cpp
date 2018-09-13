#include<iostream>
using namespace std;

int main(void)
{
	int N, x, y, r;
	int **map;
	cin >> N;
	cin >> y >> x >> r;
	y--;
	x--;

	map = new int*[N];
	for (int i = 0; i < N; i++)
		map[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			map[i][j] = 0;

	for (int i = 1; i <= r; i++) {
		if (y + i <N)
			map[y + i][x] = i;
		if (y - i >= 0)
			map[y - i][x] = i;
	}


	for (int i = 0; i < r; i++) {
		int cnt(1);
		if (x - 1 - i >= 0) {
			map[y][x - 1 - i] = i + 1;

			for (int j = map[y][x - 1 - i] + 1; j <= r; j++)
			{
				if (y - cnt >= 0)
					map[y - cnt][x - 1 - i] = j;
				if (y + cnt < N)
					map[y + cnt][x - 1 - i] = j;
				cnt++;
			}
		}

		cnt = 1;
		if (x + 1 + i < N)
		{
			map[y][x + 1 + i] = i + 1;

			for (int j = map[y][x + 1 + i] + 1; j <= r; j++)
			{
				if (y - cnt >= 0)
					map[y - cnt][x + 1 + i] = j;
				if (y + cnt < N)
					map[y + cnt][x + 1 + i] = j;
				cnt++;
			}
		}

	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (i == y && j == x)
				cout << " x ";
			else
				cout << ' ' << map[i][j] << ' ';
		}

		cout << endl;
	}

	for (int i = 0; i < N; i++)
		delete[] map[i];
	delete[] map;
}

/*
TestCase
8
4 5 3

´ä
0 0 0 0 3 0 0 0
0 0 0 3 2 3 0 0
0 0 3 2 1 2 3 0
0 3 2 1 x 1 2 3
0 0 3 2 1 2 3 0
0 0 0 3 2 3 0 0
0 0 0 0 3 0 0 0

*/