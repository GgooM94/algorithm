#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string grade[13] = { "A+","A0","A-","B+","B0","B-", "C+","C0","C-" ,"D+","D0","D-","F" };
	float res[13] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0 };

	string input;
	cin >> input;
	for (int i = 0; i < 13; i++) {
		if (input == grade[i]) {
			cout.setf(ios::fixed);
			cout.precision(1);
			cout << res[i];
			break;
		}
	}
}