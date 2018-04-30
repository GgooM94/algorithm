#include<iostream>
typedef long long ll;
ll DP[101] = { 0,1,1,1,2 };

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, input;
	cin >> T;
	for (int i = 5; i < 101; i++) {
		DP[i] = DP[i - 1] + DP[i - 5];
	}

	while (T--)
	{
		cin >> input;
		cout << DP[input] << "\n";
	}
}