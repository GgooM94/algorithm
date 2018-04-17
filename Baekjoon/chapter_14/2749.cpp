/*
	@ Pisano Period
	@ �Ǻ���ġ ���� K�� ���� �������� �׻� �ֱ⸦ ������ �ȴ�.
	
	@ k(m) <= M^2 -1
	@ k(2^n) = 3*2^(n-1)
	@ k(5^n) = 4*5^n
	@ k(2*5^n) =6n
	@ n>2���, k(10^n) = 15 * 10^(n-1)

	�Ʒ� ������ ��� 1,000,000,���� ���� �� �̹Ƿ�
	k(10^n) = 15*10^(n-1)
	1,000,000 = 10^6, n =6
	15 * 10^5 = 1,500,000
*/

#include<iostream>
#define PISANO (15*100000)
int DP[PISANO] = { 0,1 };
long long N;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 2; i < PISANO; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
		DP[i] %= 1000000;
	}
	cout << DP[N%PISANO];
}