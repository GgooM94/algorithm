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
			if (i & (1 << j)) {		//&������ ���� ���� ���� Ȯ��, �����ϸ� �ش� ��ġ ��, ���� �� 0
				sum += arr[j];
			}	
		}
		if (sum == S)
			cnt++;
	}
	cout << cnt;
}