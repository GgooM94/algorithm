#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int M, n, x(0), y(0);
	int dir(0),d;
	string str;

	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,1,0,-1};

	cin >> M >> n;

	while (n--)
	{
		cin >> str >> d;
		if (str == "MOVE") {
			x += d*dx[dir];
			y += d*dy[dir];
		}
		else {
			dir = d ? (dir + 3) % 4 : ++dir % 4;
		}

		if (x<0 || y <0 || x >M || y>M) {
			cout << -1;
			return 0;
		}		
	}
		cout << x <<" "<< y;
}