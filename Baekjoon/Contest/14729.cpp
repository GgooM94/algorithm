#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,i;
	float tmp;
	cin >> N;
	vector<float> arr(7);
	for (i = 0; i < 7; i++) {
		cin >> arr[i];
	}
	N -= 7;
	while (N--)
	{
		cin >> tmp;
		sort(arr.begin(), arr.end());
		if (tmp < arr[6])
			swap(tmp, arr[6]);
	}
	cout.setf(ios::fixed);
	cout.precision(3);
	for (i = 0; i < 7; i++)
		cout << arr[i]<<"\n";
}