#include<iostream>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, hap(0), maxN(-1);
	cin >> N;

	int *arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		hap += arr[i];
		maxN = max(maxN, arr[i]);
	}

	cout << hap - maxN;
	delete[] arr;
}