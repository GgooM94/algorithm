#include<iostream>
#include<vector>
using namespace std;

int ironMan(vector <int> p) {

	int res = 0;
	int minHp = 0;
	int count(0);

	for (int i = 0; i < p.size(); i++) {
		res += p[i];
		if (res < minHp) {
			minHp = res;
		}
	}
	return abs(minHp);
}

int abs(int sum) {
	if (sum < 1)
		return (sum * -1) + 1;
	else
		return sum + 1;
}

int main()
{
	int res;
	int p_size = 0;
	cin >> p_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	vector<int> p;
	for (int i = 0; i < p_size; i++) {
		int p_item;
		cin >> p_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		p.push_back(p_item);
	}
	res = ironMan(p);
	cout << res << endl;
	return 0;
}