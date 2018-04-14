#include<iostream>
int A[1000000];
int B, C,i;
long long tot;
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	tot = N;

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}
	cin >> B >> C;
	for (i = 0; i < N; i++) {
		if (A[i] - B >= 0)
			A[i] -= B;
		else {
			A[i] = 0;
		}
		
		if (A[i] % C == 0)
			tot += A[i] / C;
		else {
			tot += A[i] / C + 1;
		}
	}
	cout << tot;
}