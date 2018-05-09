#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N, M;
	cin >> N >> M;
	cout << abs(N - M);
}