#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
	string temp;
	temp = w;
	next_permutation(temp.begin(), temp.end());
	if (w >= temp) {
		return "no answer";
	}
	else {
		return temp;
	}
}

int main()
{

	int T;
	cin >> T;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int T_itr = 0; T_itr < T; T_itr++) {
		string w;
		getline(cin, w);
		string result = biggerIsGreater(w);

		cout << result << "\n";
	}

	return 0;
}
