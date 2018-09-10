#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int res = 100;
const int n = 3;

vector<int>arr;
bool visit[res] = { 0 };

void DFS(int n)
{
	if (n == 3)
	{
		int sum(0);
		for (int i = 0; i < arr.size(); i++)
		{
			sum += arr[i];
		}
		if (sum == res)
		{
			for (int i = 0; i < arr.size(); i++)
			{
				cout << arr[i] << " ";
			}
			cout << '\n';
		}
		return;
	}

	for (int i = 1; i <= res; i++)
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