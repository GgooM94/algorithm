#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int>arr(n + 1);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left, right, cnt, sum;
	left = right = cnt = 0;
	sum = arr[0];

	while (left <= right && right < n)
	{
		if (sum < m) {
			right++;
			sum += arr[right];
		}
		else if (sum == m) {
			cnt++;
			right++;
			sum += arr[right];
		}
		else if (sum > m) {
			sum -= arr[left];
			left++;

			if (left > right && left < n) {
				right = left;
				sum = arr[left];
			}
		}
	}
	cout << cnt;
}