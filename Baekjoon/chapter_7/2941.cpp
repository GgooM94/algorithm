#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string word;
	cin >> word;
	int cnt = word.length();
	for (int i = 0; i < word.length(); i++)
	{

		if (word[i] == '-') {
			switch (word[i - 1])
			{
			case 'c':
			case 'd':
				--cnt;
				break;
			}
		}
		else if (word[i] == '=') {
			switch (word[i - 1])
			{
			case 'c':
			case 's':
			case 'z':
				if (word[i - 2] == 'd')
				{
					cnt -= 2;
				}
				else {
					--cnt;
				}
				break;
			}
		}
		else if (word[i] == 'j') {
			switch (word[i - 1])
			{
			case 'l':
			case 'n':
				--cnt;
				break;
			}
		}
	}
	cout << cnt;
}