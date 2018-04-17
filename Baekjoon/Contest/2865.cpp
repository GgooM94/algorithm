#include<iostream>
#include<vector>
#include<algorithm>
int N, M, K;
int i, j;
bool scoreSort(const double& A, const double&B) {
	return A > B;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int genre;
	double tmp;
	cin >> N >> M >> K;

	vector<double> arr(M);
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cin >> genre >> tmp;
			arr[genre - 1] = max(arr[genre - 1], tmp);
		}
	}
	sort(arr.begin(), arr.end(),scoreSort);
	tmp = 0;
	for (i = 0; i < K; i++) {
		tmp += arr[i];
	}
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << tmp;
}