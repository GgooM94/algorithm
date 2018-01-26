#include<iostream>
using namespace std;
int main(void) {
	int n(0);
	cin >> n;
	int cnt[9] = { 0, };
	if (n == 0) {
		cnt[0] = 1;
	}
	while (n>0)
	{
		if (n % 10 == 6 || n % 10 == 9) {
			++cnt[6];
		}
		else {
			++cnt[n % 10];
		}
		n = n / 10;
	}
	if (cnt[6] % 2 == 1)
	{
		cnt[6] = (cnt[6] + 1) / 2;
	}
	else {
		cnt[6] = cnt[6] / 2;
	}

	int max = cnt[0];
	for (int i = 1; i < 9; i++) {
		if (max < cnt[i])
			max = cnt[i];
	}
	cout << max;
}
