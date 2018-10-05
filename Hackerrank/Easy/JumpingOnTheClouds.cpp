#include<algorithm>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
	int index = 0;
	int res = 100;
	bool flag = true;
	do {
		index += k;
		if (index >= c.size()) {
			flag = false;
			index %= c.size();
		}

		if (c[index] == 0) {
			res--;
		}
		else {
			res -= 3;
		}
	} while (flag);
	if (res < 0)
		res = 0;
	return res;

}

int main()
{

	string nk_temp;
	getline(cin, nk_temp);

	vector<string> nk = split_string(nk_temp);

	int n = stoi(nk[0]);

	int k = stoi(nk[1]);

	string c_temp_temp;
	getline(cin, c_temp_temp);

	vector<string> c_temp = split_string(c_temp_temp);

	vector<int> c(n);

	for (int i = 0; i < n; i++) {
		int c_item = stoi(c_temp[i]);

		c[i] = c_item;
	}

	int result = jumpingOnClouds(c, k);

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