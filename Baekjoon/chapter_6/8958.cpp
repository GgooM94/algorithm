#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int size(0);
	string inputstr;
	cin >> size;

	string *result = new string[size];
	int *res = new int[size];


	for (int i = 0; i < size; i++) {
		int score(0);
		cin >> inputstr;
		result[i] = inputstr;
		int len = result[i].length();
		int *output = new int[len] {0, };

		for (int k = 0; k < len; k++) {
			if (result[i][k] == 'O')
			{
				output[k] = 1;
			}
		}
		if (output[0] == 1)
			++score;
		for (int j = 1; j < len; j++) {
			if (output[j - 1] > 0 && output[j] >0) {
				output[j] = output[j - 1] + 1;
			}
			score += output[j];
		}
		res[i] = score;
		delete output;
	}
	for (int i = 0; i < size; i++) {
		cout << res[i] << "\n";
	}
}
