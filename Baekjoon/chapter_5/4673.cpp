#include<iostream>
using namespace std;
#define size 10001
bool arr[size] = { 0, };

void selfNum(int num) {
	int result(num);
	while (num != 0) {
		result += num % 10;
		num /= 10;
	}
	arr[result] = 1;
}

int main(void) {
	for (int i = 1; i < size; i++) {
		selfNum(i);
	}
	for (int i = 1; i < size; i++) {
		if (arr[i] == 0)
			cout << i << "\n";
	}
}
