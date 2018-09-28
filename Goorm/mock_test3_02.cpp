#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int calcF(int N) {
	string str = to_string(N);
	reverse(str.begin(), str.end());
	return N + stoi(str);
}
bool isPaline(int N) {
	string str = to_string(N);
	bool flag = true;
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] == str[str.size() - 1])
			continue;
		flag = false;
	}
	return flag;
}
int main() {
	int N;
	bool flag = false;
	cin >> N;

	for (int i = 0; i < 3; i++) {
		N = calcF(N);
		if (N >= 10000)
			break;
		if (isPaline(N) == true) {
			flag = true;
			break;
		}
	}
	if (flag == true) {
		cout << N << '\n';
	}
	else {
		cout << "-1\n";
	}
}