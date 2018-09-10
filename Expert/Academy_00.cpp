#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
const int card = 52;
const int cnt = 5;

vector<int> arr;
bool visit[card + 1] = { 0 };

void DFS(int n)
{

	if (n == cnt)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= card; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr.push_back(i);
			DFS(n + 1);
			arr.pop_back();
			visit[i] = false;
		}
	}
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	DFS(0);
}