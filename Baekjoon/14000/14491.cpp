#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	string res = "";
	cin >> T;
	while (T)
	{
		res += T % 9 + '0';
		T /= 9;
	}

	for (int i = res.size() - 1; i >= 0; i--)
		cout << res[i];
}