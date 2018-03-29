#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	long long longN;
	int res[1001] = { 0, };
	long long temp[1001] = { 0, };
	int start, end, mid;
	string N;

	int M;
	cin >> M;
	for (int i = 0; i <= M; i++) {
		longN = i* 1000000;
		temp[i] = longN;
	}
	while (cin >> N)
	{
		for (int i = N.size(); i < 8; i++)
			N += "0";
		longN = stoi(N.substr(2, N.size() - 1))*M;
		start = 0, end = M;

		while (true)
		{
			if (longN < temp[start]) {
				mid = start - 1;
				break;
			}
			mid = (start + end) / 2;
			if (temp[mid] == longN)
				break;
			else if (longN < temp[mid])
				end = mid - 1;
			else
				start = mid + 1;
		}
		res[mid]++;
	}
	for (int i = 0; i < M; i++)
		cout << res[i] << " ";
}