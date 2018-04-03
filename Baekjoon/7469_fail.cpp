#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Q(const vector<long long>& arr, const int& i, const int& j, const int& k) {
	if (i == j)
		return arr[i];
	vector<long long>temp(arr.begin() + i, arr.begin() + j + 1);

	int start(0);
	int end(temp.size() - 1), left(0), right(0);
	while (true)
	{
		if (start >= end)
			break;
		int pivot = start;
		left = start + 1;
		right = end;

		while (left <= right)
		{
			while (temp[pivot] >= temp[left] && left <end) { left++; }
			while (temp[pivot] <= temp[right] && right >start) { right--; }
			if (left < right)
				std::swap(temp[left], temp[right]);
			else
				std::swap(temp[pivot], temp[right]);
		}
		if (right == k)
			break;
		else if (right < k)
			start = right + 1;
		else
			end = right - 1;
	}
	return temp[right];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	long long num;
	cin >> N >> M;
	vector<long long> arr;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}
	int i, j, k;
	while (M--)
	{
		cin >> i >> j >> k;
		cout << Q(arr, i - 1, j - 1, k - 1) << "\n";
	}
}