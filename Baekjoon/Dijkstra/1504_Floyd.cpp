#include<iostream>
#include<vector>
#include<algorithm>
#define MAXN 987654321
long long arr[801][801];
int N, E,i,j,k;
int a, b, c;
long long res;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> E;

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if(i !=j)arr[i][j] = MAXN;
		}
	}

	for (i = 0; i < E; i++) {
		cin >> a >> b >> c;
		arr[a][b] = c;
		arr[b][a] = c;
	}

	int p1, p2;
	cin >> p1 >> p2;
	/*
		@ Floyd - Warshall Algorithm
		
		start -> end : start -> p1  + p1 -> end
		원리를 이용하여 for문 3개로 모든 경로를 탐색 할 수 있다.	
	*/

	
	for (k = 1; k <= N; k++) {
		for (i = 1; i <= N; i++){
			for (j = 1; j <= N; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
	res = min(arr[1][p1] + arr[p1][p2] + arr[p2][N], arr[1][p2] + arr[p2][p1] + arr[p1][N]);
	if (res >= MAXN)
		cout << -1;
	else
		cout << res;
}