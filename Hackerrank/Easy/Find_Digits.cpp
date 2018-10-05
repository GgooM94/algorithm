#include<algorithm>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
	int cnt = 0;
	int copyN = n;
	while (copyN) {
		if (copyN % 10 != 0) {
			if (n % (copyN % 10) == 0)
				cnt++;
		}

		copyN /= 10;
	}
	return cnt;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int t_itr = 0; t_itr < t; t_itr++) {
		int n;
		cin >> n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		int result = findDigits(n);

		cout << result << "\n";
	}
	return 0;
}