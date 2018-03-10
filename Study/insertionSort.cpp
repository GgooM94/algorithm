#include<iostream>
#include<vector>
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void insertionSort(std::vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		//�Һ��� a: arr[0..i-1]�� �̹� ���ĵǾ� �ִ�.
		//arr[0..i-1]�� arr[i]�� �����ִ´�.
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			//�Һ��� b: A[j+1...i]�� ��� ���Ҵ� A[j]���� ũ��.
			//�Һ��� c: A[0..i]������ A[j]�� �����ϸ� ���ĵǾ� �ִ�.
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