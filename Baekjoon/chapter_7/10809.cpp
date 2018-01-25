#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string n;
	int result[27];
	cin >> n;

	for (int j = 0; j < 26; j++) {
		result[j] = -1;
	}
	for (int i = 0; i < n.length(); i++) {
		if (result[n[i] - 97] == -1) {
			result[n[i] - 97] = i;
		}
	}

	for (int j = 0; j < 26; j++) {
		cout << result[j] << " ";
	}
}
