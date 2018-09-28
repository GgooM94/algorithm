#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		vector<vector<int>>arr(9, vector<int>(9));
		vector<vector<bool>>check(8, vector<bool>(8, false));
		for (int c = 0; c < 8; c++) {
			for (int r = 0; r < 8; r++) {
				cin >> arr[c][r];
			}
		}

		if (arr[0][0] != 0)
			check[0][0] = true;

		int point;
		for (int c = 0; c < 8; c++) {
			for (int r = 0; r < 8; r++) {

				if (check[c][r] == true) {
					point = arr[c][r];

					if (point == 1 || point == 3)
					{
						if (arr[c][r + 1] == 1 || arr[c][r + 1] == 4)
							check[c][r + 1] = true;
					}
					else if (point == 2 || point == 4) {
						if (arr[c + 1][r] == 2 || arr[c + 1][r] == 3)
							check[c + 1][r] = true;
					}

				}
			}
		}
		if (check[7][7])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}