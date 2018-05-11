#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;

struct Number
{
	int num;
	int cnt;
};

bool comp(const Number &a, const Number &b) {
	return a.cnt > b.cnt;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll N, C, tmp;
	cin >> N >> C;

	vector<Number>arr(N);
	cin >> tmp;
	arr[0].num = tmp;
	arr[0].cnt++;

	for (int i = 1; i < N; i++) {
		cin >> tmp;
		for (int j = 0; j < arr.size(); j++) {
			if (arr[j].num == 0) {
				arr[j].num = tmp;
				arr[j].cnt++;
				break;
			}
			if (arr[j].num == tmp) {
				arr[j].cnt++;
				break;
			}
		}
	}
	stable_sort(arr.begin(), arr.end(), comp);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j<arr[i].cnt; j++) {
			cout << arr[i].num << ' ';
		}
	}
}