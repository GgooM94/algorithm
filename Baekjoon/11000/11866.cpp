#include<iostream>
using namespace std;

bool visit[1001] = { 0 };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, res(0), cnt(0), i(0);
	cin >> N >> M;

	cout << "<";
	while (true)
	{
		cnt = 0;
		while (true)
		{
			i++;
			if (i == N + 1)i = 1;
			if (visit[i] == 1) continue;
			cnt++;
			if (visit[i] == 0 && cnt == M) {
				cout << i;
				visit[i] = 1;
				res++;
				break;
			}
		}
		if (res == N)
			break;
		cout << ", ";
	}
	cout << ">";
}