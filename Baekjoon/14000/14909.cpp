#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int input, tot(0);

	while (cin >> input)
	{
		if (input > 0)
			tot++;
	}
	cout << tot;
}