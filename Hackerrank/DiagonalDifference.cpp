#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> a) {

	int index = a.size();
	int left(0), right(0);
	for (int i = 0; i<index; i++) {
		left += a[i][i];
	}

	for (int i = 0; i<index; i++) {
		right += a[i][index - i - 1];
	}
	return abs(left - right);
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<vector<int>> a(n);
	for (int i = 0; i < n; i++) {
		a[i].resize(n);

		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = diagonalDifference(a);

	fout << result << "\n";

	fout.close();

	return 0;
}
