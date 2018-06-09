#include<iostream>

int main() {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int s1, s2;
	cin >> s1 >> s2;

	int test, input, res(0);
	for (int i = 0; i < s1; i++) {
		cin >> test >> input;
		if (test != input)
		{
			res = 1;
		}

	}
	for (int i = 0; i < s2; i++) {
		cin >> test >> input;
		if (res == 0 && (test != input))
		{
			res = 2;
		}
	}

	switch (res)
	{
	case 0:
		cout << "Accepted";
		break;
	case 1:
		cout << "Wrong Answer";
		break;
	case 2:
		cout << "Why Wrong!!!";
		break;
	}
}