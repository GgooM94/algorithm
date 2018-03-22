#include<iostream>
int count(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	return 1 +count(n / 2) + (count(n - n / 2));
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	cout << count(N*M);
}