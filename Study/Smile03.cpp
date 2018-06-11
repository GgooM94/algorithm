#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int X, Y, R;
	int x1, y1;
	vector<pair<int, int>>arr(5);
	vector<int>res(5, 0);
	cin >> X >> Y >> R;

	R *= R;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < 5; i++) {
		res[i] = (arr[i].first - X) * (arr[i].first - X) + (arr[i].second - Y)*(arr[i].second - Y);
	}

	int index(0);
	for (int i = 1; i < 5; i++) {
		if (res[index] > res[i])
		{
			index = i;
		}
	}
	if (res[index] <= R) {
		cout << index + 1;
	}
	else {
		cout << -1;
	}
}