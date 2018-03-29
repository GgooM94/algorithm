#include<iostream>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	int N,i(0);
	double num;
	cin >> N;
	vector<int> result(N);
	while (cin >> num)
	{
		num *= 1000000;
		while (true)
		{
			if (1000000 * (i) / N <= num && num < 1000000 * (i + 1) / N) {
				result[i]++;
				i++;
				break;
			}
			i++;
		}
		i = 0;
	}
	for (i = 0; i < N; i++)
		cout << result[i] << " ";
}