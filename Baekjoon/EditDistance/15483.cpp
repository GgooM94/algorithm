#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int DP[1001][1001];
int i, j;
int tmp(0);
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string A, B;
	cin >> A >> B;
	for (i = 0; i < A.size() + 1; i++) {
		DP[0][i] = i;
	}
	for (i = 0; i < B.size() + 1; i++) {
		DP[i][0] = i;
	}


	for (i = 1; i <= B.size(); i++) {
		for (j = 1; j <= A.size(); j++) {
			tmp =B[i - 1] == A[j - 1] ? 0 : 1;
			DP[i][j] = min(min(DP[i][j - 1]+1, DP[i - 1][j]+1), DP[i - 1][j - 1]+tmp);
		}
	}
	cout << DP[B.size()][A.size()];
}