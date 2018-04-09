#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int coins[6] = { 500,100,50,10,5,1 };
	int N,cnt(0);
	cin >> N;
	N = 1000 - N;
	for (int i = 0; i < 6; i++) {
		cnt += N / coins[i];
		N %= coins[i];
	}
	cout << cnt;
}