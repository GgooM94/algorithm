#include<iostream>
using namespace std;
#define size 5
int main(void)
{
	unsigned short hap(0), score(0);
	for (int i = 0; i<size; i++) {
		cin >> score;
		if (score < 40)
			hap += 40;
		else
			hap += score;
	}
	cout << hap / size;
}
