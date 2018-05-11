#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[9], index(0);

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > arr[index]) {
			index = i;
		}
	}
	cout << arr[index] << '\n' << index + 1;
}