#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<int>::iterator it;
	cin >> N;
	vector<int> arr(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	int test, num;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> num;
		it = lower_bound(arr.begin() + 1, arr.end(), num);
		if (num == *it) {
			cout << "Yes " << it - arr.begin() << '\n';
		}
		else {
			cout << "No " << it - arr.begin() << '\n';
		}
	}
	return 0;
}
