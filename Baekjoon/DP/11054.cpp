#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int DPtoRight[1001] = { 0, };
	int DPtoLeft[1001] = { 0, };

	int N, i, j,lengthMax(1);
	cin >> N;
	vector<int>arr(N);
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	DPtoRight[0] = 1;
	for (i = 1; i < N; i++) {
		DPtoRight[i] = 1;
		for (j = 0; j < i; j++) {
			if (arr[j] < arr[i])
				DPtoRight[i] = max(DPtoRight[i], DPtoRight[j] + 1);
		}
	}

	DPtoLeft[N - 1] = 1;
	for (i = N - 2; i >= 0; i--){
		DPtoLeft[i] = 1;
		for (j = N - 1; j > i; j--) {
			if (arr[i] > arr[j])
				DPtoLeft[i] = max(DPtoLeft[i], DPtoLeft[j] + 1);
		}
	}

	for (i = 0; i < N; i++) {
		lengthMax = max(lengthMax, DPtoRight[i] + DPtoLeft[i]);
	}
	cout << lengthMax-1;
}