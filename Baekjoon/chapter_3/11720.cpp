#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int N, result = 0;
	string Num;
	cin >> N;
	cin >> Num;

	for (int i = 0; i < N; i++) {
		result += Num[i] - '0';
	}
	cout << result;
}