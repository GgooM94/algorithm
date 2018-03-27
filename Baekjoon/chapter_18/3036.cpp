#include<iostream>
#include<vector>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, r, tempA, tempB;
	cin >> N;
	vector<int> arr;
	while (N--)
	{
		cin >> r;
		arr.push_back(r);
	}

	for (int i = 1; i < arr.size(); i++) {
		tempA = arr[0];
		tempB = arr[i];
		while (tempB>0)
		{
			int temp = tempB;
			tempB = tempA%tempB;
			tempA = temp;
		}
		cout << arr[0] / tempA << '/' << arr[i] / tempA << "\n";
	}

}