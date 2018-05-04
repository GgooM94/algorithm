#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> input(5);
	int burger(987654321);

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
		if (i < 3) {
			burger = min(burger, input[i]);
		}
	}
	cout << burger + min(input[3], input[4]) - 50;
}