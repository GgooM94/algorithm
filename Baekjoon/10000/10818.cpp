#include<iostream>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, minN(987654321), maxN(-987654321);
	int temp;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		minN = min(minN, temp);
		maxN = max(maxN, temp);
	}
	cout << minN << ' ' << maxN;
}