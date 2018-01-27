#include<iostream>
using namespace std;
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int parent(int a) {
	return (a / 2);
}
int left_child(int a) {
	return (2 * a);
}
int right_child(int a) {
	return (2 * a) + 1;
}
void FixHeap(int *arr, int node, int key, int max_size) {
	if (node * 2 > max_size) {
		arr[node] = key;
	}
	else {
		int largest = node;
		int left = left_child(node);
		int right = right_child(node);

		if (left <= max_size && arr[left] > arr[largest]) largest = left;
		if (right <= max_size && arr[right] > arr[largest]) largest = right;

		if (largest != node) {
			swap(arr[node], arr[largest]);
			FixHeap(arr, largest, arr[largest], max_size);
		}
	}
}

void constructHeap(int *arr, int node, int max_size) {
	int k(0);
	if (left_child(node) <= max_size) {
		constructHeap(arr, left_child(node), max_size);
		constructHeap(arr, right_child(node), max_size);
		k = arr[node];
		FixHeap(arr, node, k, max_size);
	}
}

void heapSort(int *arr, int node, int size) {
	constructHeap(arr, node, size);
	for (int last_leaf = size; last_leaf >= 2; last_leaf--) {
		swap(&arr[1], &arr[last_leaf]);
		FixHeap(arr, 1, arr[1], last_leaf - 1);
	}
}
int main(void)
{
	int N(0), i(0);
	cin >> N;
	int *arr = new int[N] {0, };

	for (i = 1; i <= N; i++) { cin >> arr[i]; }

	heapSort(arr, 1, N);
	for (i = 1; i <= N; i++) { cout << arr[i] << "\n"; }
}
