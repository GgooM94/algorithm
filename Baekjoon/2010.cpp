#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int result(1),N,input;
	cin >> N;
	while (N--) {
		cin >> input;
		result += input - 1;
	}
	cout << result;
}
