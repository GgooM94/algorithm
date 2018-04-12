#include<iostream>
#include<vector>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> res = { 1,2,3,4,5 };
	vector<int> input(5);
	int i,j;
	for (i = 0; i < 5; i++) {
		cin >> input[i];
	}
	while (res !=input)
	{
		for (i = 0; i < 4; i++) {
			if (input[i] > input[i + 1]) {
				swap(input[i], input[i + 1]);
				for (j = 0; j < 5; j++)
					cout << input[j] << " ";
				cout << endl;
			}
		}
	}
	
}