#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long A, B;
	cin >> A >> B;
	long long gob = A*B;
	while (B>0)
	{
		long long temp = B;
		B = A%B;
		A = temp;
	}
	cout << gob / A;
}