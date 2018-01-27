#include<iostream>
#define MAX 50
using namespace std;
int main(void)
{
	int N(0), num(0), i(0), j(0);
	int arr[MAX] = { 0, };
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> num;
		++arr[num];
	}

	for (i = 0; i < MAX; i++) {
		if (arr[i] != 0) {
			for (j = 0; j < arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}
