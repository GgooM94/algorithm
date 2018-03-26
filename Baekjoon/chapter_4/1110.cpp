#include<iostream>
using namespace std;
int main(void)
{
	unsigned short N(0), count(0), result(0), temp(0);
	bool TF(true);
	cin >> N;
	temp = N;

	while (TF) {
		result = N / 10 + N % 10;
		N = N % 10 * 10 + result % 10;
		count++;
		if (temp == N)
			TF = false;
	}
	cout << count;

}
  