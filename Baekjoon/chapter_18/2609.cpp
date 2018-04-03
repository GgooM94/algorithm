#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;
	int gob = A*B;
	while (B>0)
	{
		int temp = B;
		B = A%B;
		A= temp;
	}
	cout << A << "\n" << gob / A;
}