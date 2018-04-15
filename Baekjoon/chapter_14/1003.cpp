#include<iostream>

int T,N,i;
int DP[41][2];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;
	DP[0][0] = 1;
	DP[0][1] = 0;
	DP[1][0] = 0;
	DP[1][1] = 1;
	
	for (i = 2; i <= 40; i++) {
		DP[i][0] = DP[i - 1][0] + DP[i - 2][0];
		DP[i][1] = DP[i - 1][1] + DP[i - 2][1];
	}
	while (T--)
	{
		cin >> N;
		cout << DP[N][0] << " " << DP[N][1] << "\n";
	}

}