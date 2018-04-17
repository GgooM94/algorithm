#include<iostream>
#include<deque>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int cnt(0);
	int resMax(0), temp;
	deque<int>arr(4);

	cin >> arr[0] >> arr[1] >> arr[3] >> arr[2];

	for (int i = 0; i < 4; i++) {
		temp = arr[0] * arr[1] * arr[2] + arr[0] * arr[1] * arr[3];
		if (resMax < temp) {
			resMax = temp;
			cnt = i;
		}

		temp = arr.back();
		arr.pop_back();
		arr.push_front(temp);
	}
	cout << cnt;
}