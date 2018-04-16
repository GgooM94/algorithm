#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<memory.h>
using namespace std;
int N, i, j,tot(0);
int arr[125][125];
bool visit[125][125];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };

class Point {
public:
	int x;
	int y;
	int cnt;
	Point(const int& a, const int& b, const int& c) {
		x = a;
		y = b;
		cnt = c;
	}
};
bool operator>(const Point& a, const Point& b) {
	return a.cnt > b.cnt;
}

int Dijkstra(int a, int b) {
	tot = arr[0][0];
	std::priority_queue<Point,vector<Point>,greater<Point>>que;
	que.push(Point(0, 0, tot));
	visit[0][0] = true;

	while (!que.empty())
	{
		int x = que.top().x;
		int y = que.top().y;
		int count = que.top().cnt;
		que.pop();
		if (x == N - 1 && y == N - 1) {
			return count;
		}

		for (i = 0; i < 4; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];

			if (nextX < 0 || nextY < 0 || nextX >= N || nextY >= N)continue;
			if (visit[nextX][nextY] == 1)continue;
			visit[nextX][nextY] = 1;
			que.push(Point(nextX, nextY, count + arr[nextX][nextY]));	
		}
		
	}
}
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0);
	int n(1);


	while (true) {
		cin >> N;
		memset(arr, 0, sizeof(arr));
		memset(visit, 0, sizeof(visit));
		if (N == 0)
			break;
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}
		cout << "Problem "<<n++<<": "<< Dijkstra(0, 0)<<"\n";
	}
}