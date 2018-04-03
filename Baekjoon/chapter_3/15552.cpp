#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N,A,B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
}