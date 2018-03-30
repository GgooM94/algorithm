#include<iostream>
#include<vector>
#include<algorithm>
struct Num
{
	int num;
	int index;
};
//구조체 Num에 num 값으로 오름차순 정렬
bool numsort(const Num a, const Num b) {
	return a.num < b.num;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	vector<Num>arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i].num;
		arr[i].index = i;
	}
	sort(arr.begin(), arr.end(),numsort);

	int i, j, k,cnt(0);
	while (M--)
	{
		cin >> i >> j >> k;
		for (int a = 0; a < arr.size(); a++) {
			if (i - 1 <= arr[a].index && arr[a].index <= j - 1)
				cnt++;
			if (cnt == k) {
				cout << arr[a].num << endl;
				break;
			}
		}
		cnt = 0;
	}

}