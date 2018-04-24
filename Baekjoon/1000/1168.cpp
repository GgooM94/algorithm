#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int N, M;
	cin >> N >> M;

	vector<int> arr(N);
	vector<int> res;
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	int cnt(0), i(0);

	while (!arr.empty())
	{
		i += (M - 1);
		i %= arr.size();

		res.push_back(arr[i]);
		arr.erase(arr.begin() + i);
	}

	cout << "<" << res[0];
	for (i = 1; i < res.size(); i++)
		cout << ", " << res[i];
	cout << ">";
}