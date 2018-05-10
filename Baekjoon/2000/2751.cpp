#include <iostream>

using namespace std;
int n;
int *A;

void merge(int, int, int);
void merge_sort(int, int);

int main(void) {

	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << A[i] << '\n';
	}

	return 0;
}

void merge_sort(int left, int right) {
	int mid = (left + right) / 2;

	if (left < right) {
		merge_sort(left, mid);
		merge_sort(mid + 1, right);

		merge(left, mid, right);
	}
}

void merge(int left, int mid, int right) {

	int *tmp = new int[right - left + 1];

	int i = left, j = mid + 1, n = 0;
	while (i <= mid && j <= right) {
		if (A[i] < A[j]) {
			tmp[n] = A[i];
			i++;
			n++;
		}
		else {
			tmp[n] = A[j];
			j++;
			n++;
		}
	}

	while (i <= mid) {
		tmp[n] = A[i];
		i++;
		n++;
	}

	while (j <= right) {
		tmp[n] = A[j];
		j++;
		n++;
	}

	for (int i = left; i <= right; i++) {
		A[i] = tmp[i - left];
	}
	delete[] tmp;
}