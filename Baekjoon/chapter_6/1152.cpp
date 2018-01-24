#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string word;
	int count(1);
	getline(cin, word);
	int size = word.length();
	for (int i = 1; i < size; i++) {
		if (word[i] != ' ' &&word[i - 1] == ' ') {
			count++;
		}
	}
	if (word[0] == ' ')
		count--;

	cout << count;
}
