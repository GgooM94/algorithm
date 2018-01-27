#include<iostream>
using namespace std;
int main(void) {
	int N(0), temp(0);
	cin >> N;
	int *arr = new int[N] {0, };

	for (int i = 0; i<N; i++) {
		cin >> arr[i];
	}
	for (int j = N; j > 0; j--) {
		for (int i = 1; i < j; i++) {
			if (arr[i - 1] > arr[i])
			{
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++)	cout << arr[i] << "\n";
}
