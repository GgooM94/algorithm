#include<iostream>
using namespace std;
int main(void)
{
	int T(0), height(0), width(0), n(0), result(0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> height >> width >> n;
		if (n % height == 0) {
			result = height * 100 + (n / height);
		}
		else {
			result = n%height * 100 + (n / height + 1);
		}
		cout << result << "\n";
	}
}
