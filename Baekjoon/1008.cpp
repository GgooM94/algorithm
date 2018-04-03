#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a, b, temp;
	cin >> a >> b;
	vector<int> res;
	temp = a;
	int cnt = 32;
	while (true && cnt--)
	{
		if (temp > 0) {
			res.push_back(temp / b);
			temp = temp%b * 10;
		}
		else
			break;
	}
	cout << a / b << ".";
	for (int i = 1; i < res.size(); i++)
		cout << res[i];
}