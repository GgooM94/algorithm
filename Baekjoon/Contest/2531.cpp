#include<iostream>
#include<vector>
#include<algorithm>
#include<memory.h>
int N, d, k, c;
int i, j,tot,totMax(0);
bool choice[3001] = { 0};
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> d >> k >> c;
	vector<int> arr(2 * N+1);

	for (i = 1; i <= N; i++) {
		cin >> arr[i];
		arr[i + N] = arr[i];
	}

	for (i = 1; i <= N; i++) {
		tot = 0;
		memset(choice, 0, sizeof(choice));

		for (j = 0; j < k; j++) {
			if (!choice[arr[i+j]]) {
				tot++;
				choice[arr[i+j]] = true;
			}
		}
		if (!choice[c])
			tot++;

		totMax = max(totMax, tot);
	}
	cout << totMax;
}