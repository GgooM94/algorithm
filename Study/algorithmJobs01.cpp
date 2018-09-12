#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	int C, R, maxCnt(0);
	int startPoint(0);
	cin >> C >> R;

	vector<vector<int>>arr(C, vector<int>(R));

	for (int i = 0; i < C; i++) {
		for (int j = 0; j < R; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < R; i++) {

		int ground = C - 1;
		int j;
		for (j = 0; j < C; j++) {
			if (arr[j][i] == 1) {
				ground = j - 1;
				break;
			}
		}

		int point(0);
		for (int k = 0; k < 4; k++)
		{
			bool check = true;
			for (int q = 0; q < R; q++)
			{
				if (i == q)
					continue;

				if (ground - k < 0)
				{
					check = false;
					continue;
				}

				if (arr[ground - k][q] == 0)
				{
					check = false;
				}

			}
			if (check == true)
				point++;

		}
		if (maxCnt < point)
		{
			maxCnt = point;
			startPoint = i;
		}
	}

	cout << "StartPoint : " << startPoint << '\n';
	cout << "MaxCnt : " << maxCnt << '\n';
}

/*

TestCase

6 6
0 0 0 0 0 0
0 0 0 0 0 0
1 1 1 0 0 1
1 1 1 1 0 1
1 1 1 1 0 1
1 1 1 1 0 1

´ä : 2

6 7
0 0 0 0 0 0 0
0 0 0 0 0 0 0
1 1 1 0 0 1 0
1 1 1 1 0 1 0
1 1 1 1 0 1 0
1 1 1 1 0 1 0

6 7
0 0 0 0 0 0 0
0 0 0 0 0 0 0
1 1 1 0 0 1 0
1 1 1 1 0 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1

6 8
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
1 1 1 0 0 1 0 0
1 1 1 1 0 1 1 0
1 1 1 1 1 1 1 0
1 1 1 1 1 1 1 0

*/