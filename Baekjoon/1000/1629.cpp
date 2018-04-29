#include<iostream>
typedef long long ll;

ll calc(ll A, ll B, ll C) {
	if (B == 0) return 1;

	if (B & 1) {
		return A*calc(A, B - 1, C) % C;
	}
	else {
		return calc(A, B / 2, C)*calc(A, B / 2, C) % C;
	}
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll A, B, C;
	cin >> A >> B >> C;

	cout << calc(A, B, C);
}