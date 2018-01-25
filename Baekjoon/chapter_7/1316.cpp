#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int n(0), cnt(0);
	cin >> n;
	string word;
	for (int i = 0; i < n; i++) {
		bool bcount = 1;
		int arr[26] = { 0, };
		cin >> word;

		for (int k = 0; k < word.length(); k++) {
			if (word[k] != word[k + 1] || word[k + 1] == NULL) {
				arr[word[k] - 97] += 1;
			}
		}
		if (word[word.length() - 2] != word[word.length() - 1]) {
			arr[word.length() - 98] += 1;
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] > 1)
				bcount = 0;
		}

		if (bcount == 1)
			cnt++;
	}
	cout << cnt;
}
