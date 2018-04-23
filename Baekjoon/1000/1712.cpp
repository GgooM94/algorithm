#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	if (C <= B) {
		cout << -1;
	}
	else {
		cout << A / (C - B) + 1;
	}
}