#include<iostream>
using namespace std;
int repeat(int n, int cnt) {
	n -= (6 * cnt);
	++cnt;
	if (n <= 1) {
		return cnt;
	}
	repeat(n, cnt);
}

int main(void)
{
	long n(0);
	unsigned int cnt(0);
	cin >> n;
	cout << repeat(n, cnt);
}
