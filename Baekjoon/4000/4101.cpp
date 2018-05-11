#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A(-1), B(-1);
	while (1)
	{
		cin >> A >> B;
		if (A == 0 & B == 0)break;

		if (A > B) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
}