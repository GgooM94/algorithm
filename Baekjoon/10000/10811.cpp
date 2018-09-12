#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverseArr(vector<int>&arr, int left, int right)
{
	int temp;

	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int>arr(N);

	for (int i = 0; i < N; i++)
		arr[i] = i + 1;

	int left, right;
	for (int i = 0; i < M; i++)
	{
		cin >> left >> right;
		reverseArr(arr, left - 1, right - 1);
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << ' ';
}