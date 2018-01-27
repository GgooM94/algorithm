#include<iostream>
using namespace std;

void merge(int arr[], const int& begin, const int& mid, const int& end) {
	int *temp = new int[end + 1]{ 0, };

	int bStart = begin;
	int mStart = mid + 1;
	int cnt(0);

	while (bStart <= mid && mStart <= end) {
		if (arr[bStart] <= arr[mStart]) { temp[cnt++] = arr[bStart++]; }
		else { temp[cnt++] = arr[mStart++]; }
	}
	while (bStart <= mid) { temp[cnt++] = arr[bStart++]; }
	while (mStart <= end) { temp[cnt++] = arr[mStart++]; }

	bStart = begin;
	cnt = 0;
	while (bStart <= end) { arr[bStart++] = temp[cnt++]; }
}

void mergeSort(int arr[], const int& begin, const int& end) {

	int mid = (begin + end) / 2;
	if (begin < end) {
		mergeSort(arr, begin, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, begin, mid, end);
	}


}

int main(void)
{
	int N(0), i(0);
	cin >> N;
	int *arr = new int[N] {0, };

	for (i = 0; i < N; i++) { cin >> arr[i]; }
	mergeSort(arr, 0, N - 1);
	for (i = 0; i < N; i++) { cout << arr[i] << "\n"; }
}