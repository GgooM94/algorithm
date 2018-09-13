#include<iostream>
#include<vector>
#include<utility>
using namespace std;
#define C 8
#define R 8

struct Point
{
	int x, y;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int map[C][R];
	vector<Point>arr;
	Point point;

	for (int i = 0; i < C; i++) {
		for (int j = 0; j < R; j++) {
			cin >> map[i][j];

			if (map[i][j] == 2)
			{
				point.y = i;
				point.x = j;
				arr.push_back(point);
			}

		}
	}
	bool res = false;

	for (int i = 0; i < arr.size(); i++) {
		int col, row;
		col = arr[i].y;
		row = arr[i].x;

		if (res == true)
		{
			break;
		}

		for (int j = col - 1; j >= 0; j--) {
			if (map[j][row] == 0)
				continue;
			if (map[j][row] == 1)
				res = true;
			if (map[j][row] == 2 || map[j][row] == 3)
				break;
		}

		for (int j = col + 1; j <C; j++) {
			if (map[j][row] == 0)
				continue;
			if (map[j][row] == 1)
				res = true;
			if (map[j][row] == 2 || map[j][row] == 3)
				break;
		}

		for (int j = row - 1; j >= 0; j--) {
			if (map[col][j] == 0)
				continue;
			if (map[col][j] == 1)
				res = true;
			if (map[col][j] == 2 || map[col][j] == 3)
				break;
		}

		for (int j = row + 1; j <R; j++) {
			if (map[col][j] == 0)
				continue;
			if (map[col][j] == 1)
				res = true;
			if (map[col][j] == 2 || map[col][j] == 3)
				break;
		}
	}

	res ? (cout << 1) : (cout << 0);
}


/*
TestCase

0 3 0 0 0 0 0 0
3 1 0 0 0 0 2 0
0 3 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

´ä : 1

*/