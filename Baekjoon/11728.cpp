#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int i, j;
	cin >> N >> M;
	vector<int>A(N);
	vector<int>B(M);
	for (i = 0; i < N; i++)
		cin >> A[i];
	for (i = 0; i < M; i++)
		cin >> B[i];

	i = j = 0;
	while (i<N && j<M)
	{
		cout << (A[i] <= B[j] ? A[i++] : B[j++]) << " ";
	}

	if (i < N) {
		while (i < N)
			cout << A[i++] << " ";
	}
	else {
		while (j < M)
			cout << B[j++] << " ";
	}
}
