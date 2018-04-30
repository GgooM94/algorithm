#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int H[2], M[2], N;
	int cnt(0);

	cin >> H[0] >> M[0];
	cin >> H[1] >> M[1];
	cin >> N;

	for (int i = H[0]; i <= H[1]; i++) {
		for (int j = M[0]; j < 60; j++) {
			if (i % 10 == N || i / 10 % 10 == N || j % 10 == N || j / 10 % 10 == N)
				cnt++;
			if (i == H[1] && j == M[1])break;
		}
		M[0] = 0;
	}
	cout << cnt;
}