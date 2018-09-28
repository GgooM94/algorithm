#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<ctype.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	getline(cin, str);
	str += ' ';

	int cntVowel = 0;
	int cntCon = 0;
	int resVowel = 0;
	int resCon = 0;
	bool isUsedV = false;
	bool isUsedC = false;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			cntVowel = cntCon = 0;
			isUsedV = isUsedC = false;
			continue;
		}

		switch (str[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cntVowel++;
			cntCon = 0;
			if (isUsedV == false && cntVowel >= 2) {
				resVowel++;
				isUsedV = true;
			}
			break;
		default:
			cntCon++;
			cntVowel = 0;
			if (isUsedC == false && cntCon >= 3) {
				resCon++;
				isUsedC = true;
			}
			break;
		}
	}
	cout << resVowel << "\n" << resCon << '\n';
}