#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string a, b;
	char temp;
	cin >> a >> b;

	temp = a[2];
	a[2] = a[0];
	a[0] = temp;

	temp = b[2];
	b[2] = b[0];
	b[0] = temp;

	cout << (stoi(a) > stoi(b) ? a : b);
}
