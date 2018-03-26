#include<iostream>
#include<string>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie();
	vector<int> arr(10);
	
	string str;
	int temp,i,j;
	cin >> str;

	for (i = 0; i < str.size(); i++) {
		arr[str[i] - 48]++;
	}

	for (i = arr.size() - 1; i >= 0; i--) {
		for (j = arr[i]; j > 0; j--)
			cout << i;
	}

	
}