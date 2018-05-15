#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int res(0), tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		res = res + tmp*tmp;
	}
	cout << res % 10;
}