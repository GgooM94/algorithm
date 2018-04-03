#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, L, x, tmp;
	cin >> N >> L;

	while (L <101)
	{
		tmp = 0;
		for (int i = 0; i < L; i++)
			tmp += i;
		/*
		N = x + (x+1) + (x+2)....(x+n-1) = nx +tmp
		x = (N-tmp)/L
		Lx + tmp = N
		*/
		if ((N - tmp) % L == 0 && tmp <= N) {
			x = (N - tmp) / L;
			break;
		}
		L++;
	}
	if (L > 100) {
		cout << -1;
	}
	else
	{
		for (int i = 0; i < L; i++)
			cout << x + i << " ";
	}
}