#include<iostream>
using namespace std;
int main(void) {
	int T(0), cnt(1);
	int M(0), N(0), x(0), y(0), startX(0), startY(0);
	bool TF = 1;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> x >> y;
		startX = 1;
		startY = 1;
		TF = 1;
		cnt = 1;
		while (TF) {
			++startX, ++startY, ++cnt;
			if (startX == x && startY == y) {
				cout << cnt << "\n";
				TF = false;
			}
			if (startX % (M + 1) == 0)
			{
				startX = 1;
			}
			else if (startY % (N + 1) == 0) {
				startY = 1;
			}

			if (startX == M && startY == N) {
				cout << "-1" << "\n";
				TF = false;
			}

		}
	}
}
