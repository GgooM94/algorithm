#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, A, B,gob;
	cin >> N;
	while (N--)
	{
		cin >> A >> B;
		gob = A*B;
		while (B>0)
		{
			int temp = B;
			B = A%B;
			A = temp;
		}
		cout << gob / A << "\n";
	}
}