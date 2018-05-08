#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N, M;
vector<int>arr;
bool visit[10] = { 0 };

void DFS(int n) {
	if (n == M) {
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = true;
			arr.push_back(i);
			DFS(n + 1);
			arr.pop_back();
			visit[i] = false;
		}
	}

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	DFS(0);
}