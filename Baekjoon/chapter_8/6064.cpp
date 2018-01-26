#include<iostream>
using namespace std;
int main(void)
{
	int T(0);
	int M(0), N(0), x(0), y(0);
	cin >> T;
	while (T--)
	{
		cin >> M >> N >> x >> y;

		for (; x <= M*N && (x%N != y%N); x += M);
		if (x%N == y%N)cout << x << "\n";
		if (x > M*N)cout << "-1" << "\n";
	}
}
