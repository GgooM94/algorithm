#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int temp;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i - 1] == arr[i]) {
			temp = arr[i];
		}
		if (temp == arr[i]) {
			arr[i] = -1;
		}
		else {
			temp = -1;
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] != -1)
			answer.push_back(arr[i]);
	}
	return answer;
}