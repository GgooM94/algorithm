#include<iostream>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int cnt[3] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		cnt[arr[i] - 1]++;
	}
	if (cnt[0] == 5 || cnt[1] == 5 || cnt[2] == 5) {
		cout << 0;
	}
	else if (cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0) {
		cout << 0;
	}
	else {
		if (cnt[0] == 0) {
			cout << cnt[2];
		}
		else if (cnt[1] == 0) {
			cout << cnt[0];
		}
		else if (cnt[2] == 0) {
			cout << cnt[1];
		}
	}

}