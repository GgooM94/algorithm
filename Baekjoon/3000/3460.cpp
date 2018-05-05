#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, N;
	cin >> T;
	while (T--)
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			if ((1 << i) > N)break;
			if (N&(1 << i))
				cout << i << " ";
		}
		cout << "\n";
	}
}