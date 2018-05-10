#include<iostream>
#include<algorithm>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N;
	vector<int>crane(N);
	for (int i = 0; i < N; i++) {
		cin >> crane[i];
	}

	cin >> M;
	vector<int>box(M);
	for (int i = 0; i < M; i++) {
		cin >> box[i];
	}

	sort(crane.begin(), crane.end());
	sort(box.begin(), box.end());

	int cnt(0);
	bool flag;

	crane[crane.size() - 1] >= box[box.size() - 1] ? flag = true : flag = false;

	while (!box.empty() && flag)
	{
		cnt++;
		for (int i = crane.size() - 1; i >= 0; i--) {
			for (int j = box.size() - 1; j >= 0; j--) {
				if (crane[i] >= box[j]) {
					box.erase(box.begin() + j);
					break;
				}
			}
		}
	}
	flag ? (cout << cnt) : (cout << -1);
}