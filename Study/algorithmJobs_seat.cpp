#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int C, R, res;
	int copyC, copyR;
	int y(0), x(0);
	int input(1);

	cin >> C >> R >> res;

	if (res > R*C)
	{
		cout << '0';
	}
	else
	{
		copyC = C - 1;
		copyR = R;

		vector<vector<int>>arr(C, vector<int>(R));

		while (true)
		{
			for (int i = 0; i < copyR; i++)
			{
				arr[y][x] = input;
				input++;
				x++;
			}
			if (input - 1 >= R*C)
				break;

			copyR--;
			x--;
			y++;

			for (int i = 0; i < copyC; i++)
			{
				arr[y][x] = input;
				input++;
				y++;
			}
			if (input - 1 >= R*C)
				break;

			copyC--;
			x--;
			y--;

			for (int i = 0; i < copyR; i++)
			{
				arr[y][x] = input;
				input++;
				x--;
			}
			if (input - 1 >= R*C)
				break;

			copyR--;
			x++;
			y--;

			for (int i = 0; i < copyC; i++)
			{
				arr[y][x] = input;
				input++;
				y--;
			}
			if (input - 1 >= R*C)
				break;

			copyC--;
			x++;
			y++;


		}
		for (int i = 0; i < C; i++) {
			for (int j = 0; j < R; j++) {
				if (arr[i][j] == res) {
					cout << i + 1 << ' ' << j + 1;
					return 0;
				}
			}
		}
	}
}