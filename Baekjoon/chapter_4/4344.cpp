#include<iostream>
using namespace std;
int main(void) {
	int C, N, result(0);
	float count(0);
	cin >> C;
	float *arrC = new float[C];

	for (int i = 0; i<C; i++) {
		cin >> N;
		int *arr = new int[N];
		for (int j = 0; j<N; j++)
		{
			cin >> arr[j];
			result += arr[j];
		}
		for (int k = 0; k < N; k++) {
			if (arr[k] > result / N)
				count++;
		}

		arrC[i] = count / N * 100;
		result = 0;
		count = 0;
		delete[] arr;
	}
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i<C; i++)
		cout << arrC[i] << "%\n";

	delete[] arrC;

}
