#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
bool descending(const int &a, const int &b) {
	return a > b;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string input;
	int sum(0);
	cin >> input;
	sort(input.begin(),input.end(),descending);

	for (int i = 0; i < input.size(); i++) {
		sum += (input[i]-48);
	}

	if (sum % 3 == 0 && input[input.size() - 1] == '0')
		cout << input;
	else
		cout << -1;



	
}