#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, i(1);
	cin >> N;

	while (true)
	{
		if (i *(i + 1) == N - 1)
			break;
		i++;
	}
	cout << i;
}