#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, K,tot;
	cin >> N >> M >> K;
	int tmp = M;
	tot = N + M;

	while (true)
	{
		if (N - 2 * tmp >= 0 &&tot-3*tmp >=K )
			break;
		tmp--;
	}
	if (tmp < 0) cout << 0;
	else cout << tmp;
}