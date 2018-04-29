#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	vector<int>A;
	vector<int>B;
	A.resize(N);
	B.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int sum(0);
	for (int i = 0; i < N; i++) {
		sum += A[i] * B[N - 1 - i];
	}
	cout << sum;
}