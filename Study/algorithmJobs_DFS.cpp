#include<iostream>
#include<vector>
using namespace std;
const int MAX = 100;
int n, m;
vector<int>myGraph[MAX];
bool visited[MAX];

void DFS(int x) {
	visited[x] = true;
	cout << x << ' ';
	for (int i = 0; i < myGraph[x].size(); i++) {
		int y = myGraph[x][i];

		if (visited[y] == false)
		{
			DFS(y);
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
	DFS(1);
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