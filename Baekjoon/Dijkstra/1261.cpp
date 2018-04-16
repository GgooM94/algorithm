#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int N, M, i, j;
int arr[100][100];
bool visit[100][100];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };
class Point {
public:
	int x;
	int y;
	int cnt;
	Point(const int& a, const int &b, const int &c) {
		x = a;
		y = b;
		cnt = c;
	}
};
enum {
	VISIT= 1
};

bool operator>(const Point& a, const Point& b) {
	return a.cnt > b.cnt;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;

	cin >> N >> M;
	for (i = 0; i < M; i++) {
		cin >> str;
		for (j = 0; j < N; j++) {
			arr[i][j] = str[j]-'0';
		}
	}

	priority_queue<Point,vector<Point>,greater<Point>>que;		//greater 작은값을 우선순위로
	que.push(Point(0, 0, 0));
	visit[0][0] = VISIT;

	while (!que.empty())
	{
		int x = que.top().x;
		int y = que.top().y;
		int count = que.top().cnt;
		que.pop();

		if (x == M - 1 && y == N - 1) {
			cout << count;
			return 0;
		}

		for (i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (visit[nx][ny] == VISIT) continue;

			visit[nx][ny] = VISIT;
			if (arr[nx][ny] == 1) {
				que.push(Point(nx, ny, count + 1));
			}
			else {
				que.push(Point(nx, ny, count));
			}
		}
	}
}