#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int map[51][51] = { 0, };
int test[51][51] = { 0, };
class Point
{
public:
	int y, x;
	Point(int _y, int _x) {
		y = _y;
		x = _x;
	}
};


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int res = 987654321;
	cin >> N >> M;
	vector<Point> ch;
	vector<int>index;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				ch.push_back(Point(i, j));
				map[i][j] = 0;
			}
		}
	}


	int temp(0), cnt(0), lo(0);
	for (int i = 0; i < (1 << ch.size()); i++) {
		temp = i;
		cnt = 0;
		while (temp)
		{
			if (temp % 2 == 1) {
				cnt++;
			}
			temp /= 2;
		}
		temp = i;
		if (cnt == M) {

			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					test[i][j] = map[i][j];
				}
			}

			lo = 0;
			index.clear();
			while (temp)
			{
				if (temp % 2 == 1) {
					index.push_back(lo);
				}
				lo++;
				temp /= 2;
			}
			int sum(0);

			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (test[i][j] == 1) {
						int minN = 987654321;
						for (int k = 0; k < index.size(); k++) {
							minN = min(minN, abs(i - ch[index[k]].y) + abs(j - ch[index[k]].x));
						}
						sum += minN;
					}
				}
			}
			res = min(res, sum);
		}
	}
	cout << res;
}
