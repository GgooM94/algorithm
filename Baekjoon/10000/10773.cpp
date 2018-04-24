#include<iostream>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int K, N;
	vector<int>input;
	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> N;
		if (N == 0)input.pop_back();
		else input.push_back(N);
	}

	int cnt(0);
	for (int i = 0; i < input.size(); i++) {
		cnt += input[i];
	}
	cout << cnt;
}