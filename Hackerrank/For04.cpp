#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
