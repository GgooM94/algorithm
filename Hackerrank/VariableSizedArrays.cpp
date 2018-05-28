#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, q, k, input;
	cin >> n >> q;
	vector<vector<int>>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> input;
			arr[i].push_back(input);
		}
	}

	int i, j;
	while (q--)
	{
		cin >> i >> j;
		cout << arr[i][j] << '\n';
	}
	return 0;
}