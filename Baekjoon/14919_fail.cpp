#include<stdio.h>
#include<vector>

int main(void) {
	using namespace std;
	int N, i;
	double num;
	scanf_s("%d", &N);
	vector<int> result(N);
	vector<long double> arr;
	for (i = 0; i <= N; i++) {
		arr.push_back(1000000 * i / N);
	}
	int low, high, mid;
	while (scanf_s("%lf", &num))
	{
		num *= 1000000;

		low = 0;
		high = arr.size() - 1;
		while (true)
		{
			if ((high - low) == 1) {
				result[low]++;
				break;
			}
			mid = (low + high) / 2;
			if (arr[mid] == num) {
				result[mid]++;
				break;
			}
			else if (num > arr[mid])
				low = mid;
			else high = mid;
		}
	}

	for (i = 0; i < N; i++)
		printf("%d ", result[i]);
}