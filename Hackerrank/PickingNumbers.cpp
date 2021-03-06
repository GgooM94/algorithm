#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<fstream>


using namespace std;

vector<string> split_string(string);

// Complete the pickingNumbers function below.
int pickingNumbers(vector<int> a) {
	sort(a.begin(), a.end());
	a.push_back(INT_MAX);

	int cnt = 1;
	int maxCnt = -1;
	int index = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i + 1] - a[index] <= 1) {
			cnt++;
			maxCnt = max(maxCnt, cnt);
		}
		else {
			cnt = 1;
			index = i + 1;;
		}
	}
	return maxCnt;
}

int main()
{

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string a_temp_temp;
	getline(cin, a_temp_temp);

	vector<string> a_temp = split_string(a_temp_temp);

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	int result = pickingNumbers(a);

	cout << result << "\n";


	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y && x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}