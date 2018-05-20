#include<iostream>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B;
	cin >> A >> B;

	cout << A*(B - 1) + 1;
}