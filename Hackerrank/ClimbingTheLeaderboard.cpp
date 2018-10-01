#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<fstream>
#include<set>
#include<map>
using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
	vector<int>res;
	set<int>s;
	map<int, int>c;
	int lbIndex;
	int temp;
	int cnt = 1;

	for (int i = 0; i < scores.size(); i++) {
		s.insert(scores[i]);
		if (c.find(scores[i]) == c.end()) {
			c.insert(make_pair(scores[i], cnt++));
		}
	}

	for (int i = 0; i < alice.size(); i++) {
		if (scores[0] < alice[i]) {
			res.push_back(1);
		}
		else if (scores[scores.size() - 1] > alice[i]) {
			res.push_back(s.size() + 1);
		}
		else {
			lbIndex = lower_bound(scores.rbegin(), scores.rend(), alice[i] + 1) - scores.rbegin() - 1;
			temp = scores[scores.size() - lbIndex - 1];
			res.push_back(c.find(temp)->second);
		}
	}
	return res;

}

int main()
{
	int scores_count;
	cin >> scores_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string scores_temp_temp;
	getline(cin, scores_temp_temp);

	vector<string> scores_temp = split_string(scores_temp_temp);

	vector<int> scores(scores_count);

	for (int i = 0; i < scores_count; i++) {
		int scores_item = stoi(scores_temp[i]);

		scores[i] = scores_item;
	}

	int alice_count;
	cin >> alice_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string alice_temp_temp;
	getline(cin, alice_temp_temp);

	vector<string> alice_temp = split_string(alice_temp_temp);

	vector<int> alice(alice_count);

	for (int i = 0; i < alice_count; i++) {
		int alice_item = stoi(alice_temp[i]);

		alice[i] = alice_item;
	}

	vector<int> result = climbingLeaderboard(scores, alice);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << "\n";
		}
	}


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