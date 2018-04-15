#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<memory.h>
int T, N, K, W;
int i, j, X, Y;

int DP[1001];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> cost;
	vector<vector<int>> vertex;
	vector<int>input;
	queue<int>tmp;
	cin >> T;
	while (T--)
	{
		memset(DP, 0, sizeof(DP));
		cost.clear();
		vertex.clear();
		input.clear();

		cin >> N >> K;
		cost.resize(N + 1);
		vertex.resize(N + 1);
		input.resize(N + 1);

		for (i = 1; i <= N; i++) {
			cin >> cost[i];
			DP[i] = cost[i];
		}
		for (i = 0; i < K; i++) {
			cin >> X >> Y;
			vertex[X].push_back(Y);
			input[Y]++;
		}
		cin >> W;

		for (i = 1; i < N; i++) {
			if(input[i]==0)
				tmp.push(i);	
		}

		while (!tmp.empty())
		{
			int out = tmp.front();
			tmp.pop();
	
			for (j = 0; j < vertex[out].size(); j++) {
				if (--input[vertex[out][j]] == 0)
					tmp.push(vertex[out][j]);
				DP[vertex[out][j]] = max(DP[vertex[out][j]], DP[out] + cost[vertex[out][j]]);
			}
		}
		cout << DP[W] << "\n";
	}
}
