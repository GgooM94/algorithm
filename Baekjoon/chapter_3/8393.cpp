#include<iostream>
using namespace std;
int print(int N) {
	if (N < 0)
		return 0;
	return N + print(N - 1);
}

int main(void)
{
	int N;
	cin >> N;

	int result = N + print(N - 1);
	cout << result;


}