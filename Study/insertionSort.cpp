#include<iostream>
#include<vector>
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void insertionSort(std::vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		//불변식 a: arr[0..i-1]은 이미 정렬되어 있다.
		//arr[0..i-1]에 arr[i]를 끼워넣는다.
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			//불변식 b: A[j+1...i]의 모든 원소는 A[j]보다 크다.
			//불변식 c: A[0..i]구간은 A[j]를 제외하면 정렬되어 있다.
			swap(arr[j - 1], arr[j]);
			--j;
		}
	}
}
int main(void) {
	std::vector<int> arr = { 0,1,2,4,3,6,5,7,8,9 };
	insertionSort(arr);
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
}