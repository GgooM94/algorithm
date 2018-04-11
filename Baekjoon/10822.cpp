#include<iostream>
#include<string>

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i, tot(0);
	string str;
	int temp(0);
	cin >> str;
	for (i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			tot += stoi(str.substr(temp, i - temp));
			temp = i+1;
		}
	}
	tot += stoi(str.substr(temp, i - temp));
	cout << tot;
}