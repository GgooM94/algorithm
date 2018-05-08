#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, cnt(0);
	string tmp = "";
	cin >> N >> M;

	vector<int> arr(N);
	vector<string> res;
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < (1 << N); i++) {
		cnt = 0;
		tmp = "";
		for (int j = 0; j < N; j++) {
			if (i&(1 << j)) {
				cnt++;
			}
		}
		if (cnt == M) {
			for (int j = 0; j < N; j++) {
				if (i&(1 << j)) {
					tmp += (arr[j] + '0');
				}
			}
			res.push_back(tmp);
		}
	}
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << ' ';
		}
		cout << '\n';
	}
}