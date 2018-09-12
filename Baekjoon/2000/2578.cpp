#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int map[5][5];
	int temp, p, q;
	int cnt(0);
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> map[i][j];

	for (int i = 0; i < 25; i++) {
		cin >> temp;

		bool bIsPass = false;
		for (p = 0; p < 5; p++) {
			for (q = 0; q < 5; q++) {
				if (map[p][q] == temp) {
					map[p][q] = 0;
					bIsPass = true;
					for (int j = 0; j < 5; j++) {
						if (map[p][j] != 0)
							break;
						if (j == 4)
							cnt++;
					}

					for (int j = 0; j < 5; j++) {
						if (map[j][q] != 0)
							break;
						if (j == 4)
							cnt++;
					}

					if (p == q)
					{
						for (int j = 0; j < 5; j++) {
							if (map[j][j] != 0)
								break;
							if (j == 4)
								cnt++;
						}
					}
					if (p + q == 4)
					{
						for (int j = 0; j < 5; j++) {
							if (map[j][4 - j] != 0)
								break;
							if (j == 4)
								cnt++;
						}
					}
					break;
				}
			}
			if (bIsPass)
				break;
		}

		if (cnt >= 3)
		{
			cout << i + 1;
			break;
		}
	}
}

/*
TestCase

11 12 2 24 10
16 1 13 3 25
6 20 5 21 17
19 4 8 14 9
22 1 7 23 18
5 10 7 16 2
4 22 8 17 13
3 18 1 6 25
12 19 23 14 21
11 24 9 20 15

´ä 15
*/