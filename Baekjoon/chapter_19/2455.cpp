#include<iostream>
#include<algorithm>
int main(void) {
	using namespace std;
	int out, in;
	int people;
	cin >> out >> in;
	people = in;
	int maxRes = people;
	for (int i = 0; i < 3; i++) {
		cin >> out >> in;
		people -= out;
		people += in;
		maxRes = max(maxRes, people);
	}
	cout << maxRes;

}