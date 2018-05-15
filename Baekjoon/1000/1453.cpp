#include<iostream>

bool visit[101] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, input, cnt(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (visit[input]) {
			cnt++;
		}
		else {
			visit[input] = 1;
		}
	}
	cout << cnt;
}