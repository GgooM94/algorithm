#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int>arr(N);
	int cnt(0);
	for (int i = 0; i < N; i++) {
		int sCnt(0), bCnt(0);
		int ssCnt(0), bbCnt(0);
		cin >> arr[i] >> sCnt >> bCnt;

		int a = arr[i] / 100;
		int b = arr[i] % 100 / 10;
		int c = arr[i] % 10;

		for (int k = 100; k < 1000; k++) {

			int x = k / 100;
			int y = k % 100 / 10;
			int z = k % 10;

			if (a == x)
				ssCnt++;
			if (b == y)
				ssCnt++;
			if (c == z)
				ssCnt++;
			if (a == y || a == z)
				bbCnt++;
			if (b == x || b == z)
				bbCnt++;
			if (c == x || c == y)
				bbCnt++;

			bool check = true;
			if (ssCnt == sCnt && bbCnt == bCnt) {

				for (int q = 0; q < N; q++) {
					ssCnt = bbCnt = 0;
					int qa = arr[i] / 100;
					int qb = arr[i] % 100 / 10;
					int qc = arr[i] % 10;

					if (qa == x)
						ssCnt++;
					if (qb == y)
						ssCnt++;
					if (qc == z)
						ssCnt++;
					if (qa == y || a == z)
						bbCnt++;
					if (qb == x || b == z)
						bbCnt++;
					if (qc == x || c == y)
						bbCnt++;
					if (ssCnt != sCnt || bbCnt != bCnt)
						check = false;
				}
				if (check)
					cnt++;
			}
		}
	}
	cout << cnt;
}
