#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string word;
	cin >> word;

	int length = word.length();
	for (int i = 1; i <= length; i++) {
		cout << word[i - 1];
		if (i % 10 == 0)
			cout << "\n";
	}
}

