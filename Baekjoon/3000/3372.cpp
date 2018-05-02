#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int arr[101][101] = { 0 };
string DP[101][101] = {};

string sum(const string &a, const string &b) {
	int index(0);
	int i = a.size() - 1;
	int j = b.size() - 1;
	string num;

	for (int i = 0; i < (a.size() >= b.size() ? a.size() + 1 : b.size() + 1); i++) {
		num += '0';
	}

	while (i >= 0 && j >= 0)
	{
		if (a[i] + b[j] - '0' - '0' + num[index] > '9') {
			num[index] += a[i--] + b[j--] - '0' - '0' - 10;
			num[index + 1]++;
			index++;
		}
		else {
			num[index] += a[i--] + b[j--] - '0' - '0';
			index++;
		}
	}
	while (i >= 0) {
		if (a[i] - '0' + num[index] > '9') {
			num[index] += a[i--] - '0' - 10;
			num[index + 1]++;
			index++;
		}
		else {
			num[index] += a[i--] - '0';
			index++;
		}
	}

	while (j >= 0)
	{
		if (b[j] - '0' + num[index] > '9') {
			num[index] += b[j--] - '0' - 10;
			num[index + 1]++;
			index++;
		}
		else {
			num[index] += b[j--] - '0';
			index++;
		}
	}

	if (num[num.size() - 1] == '0') {
		num = num.substr(0, num.size() - 1);
	}

	for (int i = 0; i < num.size() / 2; i++) {
		swap(num[i], num[num.size() - 1 - i]);
	}
	return num;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			DP[i][j] = '0';
		}
	}
	DP[0][0] = '1';

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 0)continue;
			if (j + arr[i][j] < N) { DP[i][j + arr[i][j]] = sum(DP[i][j + arr[i][j]], DP[i][j]); }
			if (i + arr[i][j] < N) { DP[i + arr[i][j]][j] = sum(DP[i + arr[i][j]][j], DP[i][j]); }
		}
	}
	cout << DP[N - 1][N - 1];
}