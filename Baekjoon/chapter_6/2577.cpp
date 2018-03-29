#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(void) {
	string result;

	int n[10] = { 0, };
	unsigned int A(0), B(0), C(0);
	cin >> A >> B >> C;

	A = A*B*C;
	stringstream s;
	s << A;
	result = s.str();

	for (int i = 0; i < result.length(); i++) {
		++n[result[i] - '0'];
	}
	for (int i = 0; i < 10; i++) {
		cout << n[i] << "\n";
	}
}
