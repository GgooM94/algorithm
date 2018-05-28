#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {

	int a, b;
	cin >> a >> b;
	char *str[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (int i = a; i <= b; i++) {
		if (i <= 9) {
			cout << str[i - 1] << '\n';
		}
		else {
			if (i & 1) {
				cout << "odd\n";
			}
			else {
				cout << "even\n";
			}
		}
	}
	// Complete the code.
	return 0;
}
