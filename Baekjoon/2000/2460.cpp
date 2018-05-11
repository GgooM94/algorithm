#include<iostream>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, tot(0), res(-1);
	for (int i = 0; i < 10; i++) {
		cin >> N >> M;
		tot -= N;
		tot += M;
		res = max(res, tot);
	}
	cout << res;
}