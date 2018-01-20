#include<iostream>
using namespace std;
int main(void) {
	unsigned short N;
	cin >> N;
	if (N <= 100 && N >= 90)
	{
		cout.put('A');
	}
	else if (N <= 89 && N >= 80)
	{
		cout.put('B');
	}
	else if (N <= 79 && N >= 70)
	{
		cout.put('C');
	}
	else if (N <= 69 && N >= 60) {
		cout.put('D');
	}
	else
	{
		cout.put('F');
	}
}
