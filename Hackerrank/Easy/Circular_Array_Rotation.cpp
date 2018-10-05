#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

vector<string> split_string(string);

// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
	vector<int>res;
	k %= a.size();
	int loc = a.size() - k;
	reverse(a.begin(), a.begin() + loc);
	reverse(a.begin() + loc, a.end());
	reverse(a.begin(), a.end());

	for (int i = 0; i < queries.size(); i++) {
		res.push_back(a[queries[i]]);
	}
	return res;
}

int main()
{
	string nkq_temp;
	getline(cin, nkq_temp);

	vector<string> nkq = split_string(nkq_temp);

	int n = stoi(nkq[0]);

	int k = stoi(nkq[1]);

	int q = stoi(nkq[2]);

	string a_temp_temp;
	getline(cin, a_temp_temp);

	vector<string> a_temp = split_string(a_temp_temp);

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	vector<int> queries(q);

	for (int i = 0; i < q; i++) {
		int queries_item;
		cin >> queries_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		queries[i] = queries_item;
	}

	vector<int> result = circularArrayRotation(a, k, queries);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << "\n";
		}
	}

	cout << "\n";
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