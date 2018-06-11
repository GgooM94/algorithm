#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,temp;
	cin >> N;
	
	int cnt(0);
	for (int i = 0; i < N; i++) {
		cin >> temp;
		cnt += temp;
	}
	cout << cnt - (N - 1);
}