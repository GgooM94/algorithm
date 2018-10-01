#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<fstream>


using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int ground = 0;
	int cnt = 0;
	bool isUnderGround = false;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'U') {
			ground++;
		}
		else {
			ground--;
		}

		if (isUnderGround == false && ground < 0) {
			isUnderGround = true;
			continue;
		}

		if (isUnderGround == true && ground >= 0) {
			isUnderGround = false;
			cnt++;
		}
	}
	return cnt;

}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string s;
	getline(cin, s);

	int result = countingValleys(n, s);

	cout << result << "\n";
	return 0;
}