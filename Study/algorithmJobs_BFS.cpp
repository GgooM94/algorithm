#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int MAX = 100;
int n, m;
vector<int>myGraph[MAX];
bool visit[MAX] = { 0, };
queue<int>que;

void BFS(int x) {
	que.push(x);
	visit[x] = true;

	while (!que.empty())
	{
		int cur = que.front();
		cout << cur << ' ';
		que.pop();

		for (int i = 0; i < myGraph[cur].size(); i++) {
			int next = myGraph[cur][i];

			if (visit[next] == false) {
				visit[next] = true;
				que.push(next);
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int start, end;

		cin >> start >> end;

		myGraph[start].push_back(end);
		myGraph[end].push_back(start);
	}

	BFS(1);
}

/*
TestCase
9 12
1 2
1 3
2 3
2 4
2 6
3 7
4 5
4 7
4 8
5 6
7 8
8 9
*/