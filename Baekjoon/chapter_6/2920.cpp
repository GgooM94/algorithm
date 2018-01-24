#include<iostream>
using namespace std;
#define size 8
int main(void) {
	int n[size];
	int min(1), max(8);

	for (int i = 0; i <size; i++) {
		cin >> n[i];
	}

	if (n[0] != min && n[0] != max)
	{
		cout << "mixed";
		return 0;
	}
	else if (n[0] == min) {
		for (int k = 1; k<size; k++) {
			if (n[k] != ++min)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
	}
	else if (n[0] == max) {
		for (int k = 1; k<size; k++) {
			if (n[k] != --max)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
	}
}
