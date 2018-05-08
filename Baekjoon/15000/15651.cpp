#include<iostream>
using namespace std;

int N, M;
int arr[10] = { 0 };
void DFS(int n) {
	if (n == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++) {
		arr[n] = i + 1;
		DFS(n + 1);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	DFS(0);
}