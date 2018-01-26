#include<iostream>
using namespace std;
int main(void) {
	int T(0);
	long temp(0);
	short k(0), n(0);
	int arr[210] = { 0, };

	for (int k = 0; k < 14; k++) {
		arr[k] = k + 1;
	}
	for (int j = 14; j < 210; j++) {
		temp = 0;
		for (int a = (j - 14) - (j % 14); a <= (j - 14); a++) {
			temp += arr[a];
		}
		arr[j] = temp;
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << arr[14 * k + n - 1] << "\n";
	}

}
