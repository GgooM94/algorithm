#include<iostream>
#include<algorithm>
int N, i, j,k;

bool arr[101][101] = { 0 };
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				arr[i][j] = 0;
			else
				arr[i][j] = 1;
		}
	}

	for (k = 1; k <= N; k++) {
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				 }
			}
		}
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (arr[i][j] == 0)
				cout << 1 << " ";
			else
				cout <<0<<" ";
		}
		cout << "\n";
	}
}