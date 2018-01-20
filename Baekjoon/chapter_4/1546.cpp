#include<iostream>
using namespace std;
int main(void)
{
	int size;
	float result(0);
	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		result += arr[i];
	}
	int Max(arr[0]);
	for (int i = 0; i < size; i++) {
		if (Max < arr[i])
			Max = arr[i];
	}
	result = result / Max * 100 / size;
	cout << fixed;
	cout.precision(2);
	cout << result;
	delete[] arr;
}
