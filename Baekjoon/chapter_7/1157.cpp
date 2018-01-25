#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string word;
	cin >> word;
	int result[26] = { 0, };

	for (int i = 0; i<word.length(); i++)
	{
		if (word[i] < 97) {
			word[i] += 32;
		}
		result[word[i] - 97] += 1;

	}
	int max = result[0], index(0);
	bool flag = 0;
	for (int i = 1; i < 26; i++) {
		if (max < result[i]) {
			max = result[i];
			flag = 0;
			index = i;
		}
		else if (max == result[i]) {
			++flag;
		}
	}
	if (flag > 0)
		cout << '?';
	else
		cout << char(65 + index);
}
