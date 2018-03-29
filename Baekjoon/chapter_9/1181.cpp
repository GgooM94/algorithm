#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<string> arr;
	string str;
	string temp;
	int N,i,j;
	cin >> N;
	while ( N--)
	{
		temp = "";
		cin >> str;
		for (i = 0; i < (51 - str.size()); i++)
			temp += "A";
		str = temp + str;
		arr.push_back(str);
	}
	sort(arr.begin(), arr.end());
	for (i = 0; i < arr.size(); i++) {
		for (j = 50; j >= 0; j--) {
			if (arr[i][j] == 'A')
				break;
		}
		if (i >0 && temp ==arr[i].substr(j + 1, arr[i].size() - 1))
		{
			continue;
		}
		temp = arr[i].substr(j+1, arr[i].size()-1);
		cout << temp << "\n";
	}
}

