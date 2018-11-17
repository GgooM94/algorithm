#include <string>
#include <vector>
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	vector<int>ans;
	int brown, red;
	cin >> brown >> red;

	int left, right;
	left = right = 1;

	while (true) {
		if (2 * (left + right + 2) == brown && left*right == red) {
			break;
		}
		else if (2 * (left + right + 2) < brown) {
			right++;
		}
		else {
			right--;
			left++;
		}
	}
	ans.push_back(right + 2);
	ans.push_back(left + 2);
}