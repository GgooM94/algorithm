#include<iostream>
#include<algorithm>
#include<vector>

struct points
{
	int x;
	int y;
};

bool comp(const points &a, const points &b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	return a.x < b.x;
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<points> input(N);
	for (int i = 0; i < N; i++) {
		cin >> input[i].x >> input[i].y;
	}
	sort(input.begin(), input.end(), comp);

	for (int i = 0; i < N; i++)
		cout << input[i].x << " " << input[i].y << "\n";
}