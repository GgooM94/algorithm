#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int>arr(N);
	vector<int>arrSum(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < arr.size(); i++)
	{
		int sum(0), index;
		index = i;
		arrSum[i] = arr[i];
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[index] < arr[j])
			{
				index = j;
				arrSum[i] += arr[j];
			}
		}
	}

	vector<int>maxArr;
	int maxIndex(0);
	for (int i = 1; i < arrSum.size(); i++)
	{
		if (arrSum[maxIndex] < arrSum[i])
			maxIndex = i;
	}

	maxArr.push_back(arr[maxIndex]);
	for (int i = maxIndex + 1; i < arrSum.size(); i++)
	{
		if (maxArr.back() < arr[i])
			maxArr.push_back(arr[i]);
	}

	for (int i = 0; i < maxArr.size(); i++)
	{
		cout << maxArr[i] << ' ';
	}
}
