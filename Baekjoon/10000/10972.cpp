#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	vector<int>arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	if (next_permutation(arr.begin(), arr.end()))
	{
		for (int i = 0; i < N; i++)
			cout << arr[i] << ' ';
	}
	else {
		cout << -1;
	}
}
