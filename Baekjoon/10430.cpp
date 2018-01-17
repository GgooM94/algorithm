#include<iostream>
using namespace std;

int cal1(const int &A, const int &B, const int &C) {
	return (A + B) % C;
}
int cal2(const int &A, const int &B, const int &C) {
	return (A*B) % C;
}
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << cal1(A, B, C) << "\n" << cal1(A, B, C) %C << "\n" 
		<< cal2(A, B, C) << "\n" << cal2(A, B, C) % C;
}
