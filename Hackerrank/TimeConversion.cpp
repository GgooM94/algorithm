#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
string timeConversion(string s) {
	string res;
	if (s[s.size() - 2] == 'A') {
		res = s.substr(0, s.size() - 2);
		if (res[0] == '1' && res[1] == '2') {
			res[0] = '0';
			res[1] = '0';
		}
	}
	else {
		res = s.substr(0, s.size() - 2);
		if (res[0] == '1' && res[1] == '2') {
		}
		else {
			res[0]++;
			res[1] += 2;
		}
	}
	return res;
}

int main()
{
	string s;
	getline(cin, s);
	string result = timeConversion(s);
	cout << result << "\n";
	return 0;
}
