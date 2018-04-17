#include<iostream>

int N,S, sum(0),cnt(0),i, j;
int arr[20];
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> S;
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (i = 1; i < (1 << N); i++) {
		sum = 0;
		for (j = 0; j < N; j++) {
			if (i & (1 << j)) {		//&연산을 통해 집합 존재 확인, 존재하면 해당 위치 값, 없을 시 0
				sum += arr[j];
			}	
		}
		if (sum == S)
			cnt++;
	}
	cout << cnt;
}