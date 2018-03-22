#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000001
int main(void) {
	bool Num[MAX];
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, divisor;
	cin >> N;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> divisor;
		arr.push_back(divisor);
	}
	sort(arr.begin(),arr.end());
	cout << arr[0] * arr[N-1];
}