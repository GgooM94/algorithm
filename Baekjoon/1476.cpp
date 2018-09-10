#include<iostream>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie();
	vector<int> year = { 1,1,1 };
	int cnt(1);
	int E, S, M;
	cin >> E >> S >> M;
	vector<int>result = { E,S,M };
	while (year != result)
	{
		year[0] = (year[0]+1) % 16;
		year[1] = (year[1]+1) % 29;
		year[2] = (year[2]+1) % 20;
		if (year[0] == 0)
			year[0]++;
		if (year[1] == 0)
			year[1]++;
		if (year[2] == 0)
			year[2]++;
		cnt++;
	}
	cout << cnt;
}
