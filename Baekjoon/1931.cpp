#include<iostream>
#include<vector>
#include<algorithm>
struct Time {
	int start;
	int end;
};
bool startSort(const Time &a, const Time &b) {
	if (a.end == b.end)
		return a.start < b.start;
	return a.end < b.end;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, i, nowTime(0), cnt(0);
	cin >> N;
	Time *input = new Time[N];
	for (i = 0; i < N; i++) {
		cin >> input[i].start >> input[i].end;
	}
	sort(input, input + N, startSort);

	for (i = 0; i < N; i++) {
		if (nowTime <= input[i].start) {
			nowTime = input[i].end;
			cnt++;
		}
	}
	cout << cnt;
}
