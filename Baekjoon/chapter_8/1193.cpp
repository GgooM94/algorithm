#include<iostream>
using namespace std;
int main(void)
{
	int n(0), cnt(0);
	bool TF(1);
	cin >> n;

	while (TF) {
		if (n - cnt > 0) {
			n -= cnt;
			++cnt;
		}
		else {
			TF = 0;
		}
	}
	if (cnt % 2 == 1) {
		cout << (cnt + 1) - n << "/" << n;
	}
	else {
		cout << n << "/" << (cnt + 1) - n;
	}

}
