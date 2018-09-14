#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	vector<int>arr(N);

	for (int i = 0; i < N; i++)
		arr[i] = i + 1;

	while (true)
	{
		for (int i = 0; i < N; i++)
			cout << arr[i] << ' ';
		cout << '\n';

		if (!next_permutation(arr.begin(), arr.end()))
			break;
	}
}