#include<iostream>
#define MAX 10001
using namespace std;
int main(void) {
	int N(0), num(0);
	cin >> N;

	int *arrA = new int[N] { 0, };

	int arrB[MAX] = { 0 };

	int *arrC = new int[N] { 0, };

	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
		arrB[arrA[i]]++;
	}
	for (int i = 1; i < MAX; i++) {
		arrB[i] += arrB[i - 1];
	}

	for (int i = N - 1; i >= 0; i--) {
		arrC[--arrB[arrA[i]]] = arrA[i];
	}
	for (int i = 0; i < N; i++) {
		cout << arrC[i] << "\n";
	}
}

