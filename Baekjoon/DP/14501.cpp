#include<iostream>
#include<vector>
#include<algorithm>

int N, T, P,i,j;
int DP[16];
int costMax(0);
struct Schedule
{
	int day;
	int cost;
};

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	Schedule My[16];

	cin >> N;
	for (i = 1; i <= N; i++) {
		cin >> My[i].day >> My[i].cost;
	}
	for (i = 1; i <= N; i++) {
		DP[i] = My[i].cost;

		for (j = 1; j < i; j++) {
			if (i -j >= My[j].day) {
				DP[i] = max(DP[i], DP[j] + My[i].cost);
			}
		}
		if(My[i].day+i <=N+1)
			costMax = max(costMax, DP[i]);
	}
	cout << costMax;
}