#include<iostream>
using namespace std;
void Han(int &n) {
	int count = 0;
	if (n < 100) {
		count = n;
	}
	else {
		count = 99;
	}
	for (int i = 100; i <= n; i++) {
		if (i / 100 - i % 100 / 10 == i % 100 / 10 - i % 10)
			count++;
	}
	cout << count;

}

int main(void) {
	int n(0);
	cin >> n;
	Han(n);
}
