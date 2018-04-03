#include<iostream>
#include<vector>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, i,j,cnt(0);
	double num;
	cin >> N;
	vector<int> temp(10000);

	while (cin>>num)
	{
		temp[(int)(num * 10000)]++;
	}

	for (i = 0; i < N; i++) {
		if (i < N - 1) {
			for (j = i*(10000 / N); j < (i + 1)*(10000 / N); j++) {
				cnt += temp[j];
			}
		}
		else {
			for (j = i*(10000 / N); j < 10000; j++) {
				cnt += temp[j];
			}
		}
		cout << cnt << " ";
		cnt = 0;
	}
}