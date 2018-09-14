#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int>input1(N);
	vector<int>input2(N);
	vector<int>res(N);

	for (int i = 0; i < N; i++) {
		cin >> input1[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> input2[i];
	}

	for (int i = 0; i < N; i++) {
		res[i] = input1[i] | input2[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 0; j--) {
			if (res[i] & 1 << j)
				cout << '#';
			else
				cout << ' ';
		}
		cout << '\n';
	}
}

/*
TestCase
5
9 20 28 18 11
30 1 21 17 28

6
46 33 33 22 31 50
27 56 19 14 14 10
*/