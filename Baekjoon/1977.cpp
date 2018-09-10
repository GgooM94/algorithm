#include<iostream>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie();
	bool arr[10001] = { 0, };
	int i, M, N;
	int tot(0),minRes =987654321;
	for (i = 1; i < 101; i++) {
		arr[i*i] = 1;
	}
	
	cin >> M >> N;

	for (i = M; i <= N; i++) {
		if (arr[i] == 1) {
			minRes = min(minRes, i);
			tot += i;
		}
	}

	if (tot == 0)
		cout << -1;
	else
1		cout << tot << "\n" << minRes;
}
