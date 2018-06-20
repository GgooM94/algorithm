#include<iostream>
#include<string>
#include<algorithm>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	int index(0);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ':') {
			index = i;
			break;
		}
	}

	int A(0), B(0);
	A = stoi(str.substr(0, index));
	B = stoi(str.substr(index + 1));

	while (B>0)
	{
		int temp = B;
		B = A%B;
		A = temp;
	}
	cout << stoi(str.substr(0, index)) / A << ':' << stoi(str.substr(index + 1)) / A;
}