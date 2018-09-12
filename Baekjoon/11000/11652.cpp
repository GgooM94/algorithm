#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Point
{
	int x, y;
};

bool cmp(const Point& a, const Point& b)
{
	if (a.y < b.y)
		return true;
	if (a.y == b.y && a.x < b.x)
		return true;

	return false;
}
int main(void)
{
	int N;
	cin >> N;

	vector<Point>arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << arr[i].x << ' ' << arr[i].y << '\n';
	}
}