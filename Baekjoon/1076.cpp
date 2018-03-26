#include<iostream>
#include<string>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie();
	vector<int> result;
	vector<string> arr = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	string str;
	int i,j;
	for (i = 0; i < 3; i++) {
		cin >> str;
		if (result.size() == 0 && str == arr[0])
			continue;

		for (j =0; j<arr.size();j++)
		{
			if (str == arr[j]) {
				result.push_back(j);
				break;
			}
		}
	}
	if (result.size() <= 1) {
		cout << 0;
	}
	else {
		int temp = result[result.size() - 1];
		result.pop_back();

		for (i = 0; i < temp || result.size() == 0; i++)
			result.push_back(0);

		for (i = 0; i < result.size(); i++)
			cout << result[i];
	}
}