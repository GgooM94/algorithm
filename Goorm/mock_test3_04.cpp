#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

bool maxCmp(const string& a, const string& b) {
	if (a.size() == b.size()) {
		return a > b;
	}
	else if (a.size() < b.size()) {
		return (a + a) > b;
	}
	else {
		return a > (b + b);
	}
}

bool minCmp(const string& a, const string& b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else if (a.size() < b.size()) {
		return (a + a) < b;
	}
	else {
		return a < (b + b);
	}
}
int main() {
	int N;
	cin >> N;

	vector<string>arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}



	string tempA;
	long long maxNum;
	long long minNum;
	sort(arr.begin(), arr.end(), maxCmp);
	for (int i = 0; i < N; i++) {
		tempA += arr[i];
	}
	maxNum = stoll(tempA);
	string tempB;
	sort(arr.begin(), arr.end(), minCmp);
	for (int i = 0; i < N; i++) {
		tempB += arr[i];
	}
	minNum = stoll(tempB);

	cout << maxNum + minNum;


	return 0;
}