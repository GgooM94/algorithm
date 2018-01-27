#include<iostream>
using namespace std;
void merge(int arr[], int begin, int mid, int end) {

	int *temp = new int[end];
	int center = mid;
	int start = begin;

	for (int i = begin; i <= end; i++)
	{
		if (begin > center) {
			temp[i] = arr[mid + 1];
			mid++;
		}
		else if (mid + 1 > end) {
			temp[i] = arr[begin++];
		}
		else if (arr[begin] < arr[mid + 1]) {
			temp[i] = arr[begin++];
		}
		else {
			temp[i] = arr[mid + 1];
			mid++;
		}
	}
	for (int i = start; i <= end; i++) {
		arr[i] = temp[i];
	}
}

void mergeSort(int arr[], int begin, int end) {

	if (begin < end) {
		int mid = (end + begin) / 2;
		mergeSort(arr, begin, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, begin, mid, end);
	}
}

int main(void) {
	int N(0);
	cin >> N;
	int *arr = new int[N] {0, };

	for (int i = 0; i < N; i++) cin >> arr[i];

	mergeSort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) cout << arr[i] << "\n";
}
