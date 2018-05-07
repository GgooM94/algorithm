#include<iostream>

int x[1001] = { 0 };
int y[1001] = { 0 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tmp;

	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		x[tmp]++;
		cin >> tmp;
		y[tmp]++;
	}

	for (int i = 1; i < 1001; i++) {
		if (x[i] == 1)cout << i << " ";
	}
	for (int i = 1; i < 1001; i++) {
		if (y[i] == 1)cout << i;
	}
}