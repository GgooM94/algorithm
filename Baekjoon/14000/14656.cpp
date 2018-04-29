#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, tot(0);
	cin >> N;
	vector<int>arr;
	arr.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] != i + 1)
			tot++;
	}
	cout << tot;
}
