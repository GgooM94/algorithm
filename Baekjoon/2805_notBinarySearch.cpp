#include<iostream>
#include<algorithm>
#include<vector>
int N,i;
long long M, tot(0);
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int temp;
	cin >> N >> M;
	vector<long long> arr(N+1);
	arr[0] = 0;

	for (i = 1; i < N+1; i++) {
		cin >> arr[i];
		tot += arr[i];
	}
	sort(arr.begin(), arr.end());

	i = 1;
	while (tot >M)
	{
		tot -= (arr[i]-arr[i-1]) * (N - i+1);
		i++;
	}
	
	temp = arr[i - 1];
	while (tot < M)
	{
		tot += (N - i+2);
		temp--;
	}
	cout << temp;
}