#include<iostream>
int length;
inline int calc(int a) {
	length = 0;
	while (a)
	{
		length++;
		a /= 10;
	}
	return length;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,cnt(0);
	cin >> N;

	for (int i = 1; i <= N;i++) {
		cnt += calc(i);
	}
	cout <<cnt;
}