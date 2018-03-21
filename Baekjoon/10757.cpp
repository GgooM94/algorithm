#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
int main(void) {
	using namespace std;
	string A, B;
	vector<int> result;
	int temp(0);
	cin >> A >> B;
	int a = A.size() - 1;
	int b = B.size() - 1;
	int size = max(A.size(), B.size());

	for (int i = size - 1; i >= 0; i--) {
		if (a >= 0 && b >= 0) {
			result.push_back((A[a] + B[b] - 96 + temp) % 10);
			if ((A[a] + B[b] - 96+temp) >= 10)temp = 1;
			else temp = 0;
			a--;
			b--;
		}
		else if (a >= 0 && b < 0) {
			result.push_back((A[a] - 48 + temp) % 10);
			if ((A[a] - 48 + temp) >= 10)temp = 1;
			else temp = 0;
			a--;
		}
		else if (a < 0 && b >= 0) {
			result.push_back((B[b] - 48 + temp) % 10);
			if ((B[b] - 48 + temp) >= 10)temp = 1;
			else temp = 0;
			b--;
		}
	}
	if (temp == 1) result.push_back(1);
	for (int i = result.size() - 1; i >= 0; i--)
		cout << result[i];
}