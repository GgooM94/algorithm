#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int minX, minY, N;
	int x, y;
	cin >> minX >> minY >> N;
	while (N--)
	{
		cin >> x >> y;
		minX*y < x*minY ? 0: (minX = x, minY = y);

	}
	cout.precision(2);
	cout << (double)(minX*1000) / minY;
}