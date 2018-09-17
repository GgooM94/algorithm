#include <string>
#include <vector>
#include<iostream>
#
using namespace std;

int solution(vector<int> arr) {
	int answer = arr[0];
	int temp;
	int bN, sN;
	for (int i = 1; i < arr.size(); i++) {
		if (answer > arr[i]) {
			bN = answer;
			sN = arr[i];
		}
		else {
			bN = arr[i];
			sN = answer;
		}
		while (sN) {
			temp = sN;
			sN = bN % sN;
			bN = temp;
		}
		answer = (answer * arr[i]) / bN;
	}
	return answer;
}

int main(void) {
	vector<int> arr = { 2,6,8,14 };
	cout << solution(arr);

}