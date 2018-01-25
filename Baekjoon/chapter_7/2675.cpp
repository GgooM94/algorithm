#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int n(0);
	int repeat(0);
	string word;
	cin >> n;

	string *newWord = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> repeat >> word;
		for (int j = 0; j < word.length(); j++) {
			for (int k = 0; k < repeat; k++) {
				newWord[i] += word[j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << newWord[i] << "\n";
	}
	delete[] newWord;
}
