#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int>stu(n + 2, 1);
	for (int i = 0; i < reserve.size(); i++) {
		stu[reserve[i]]++;
	}

	for (int i = 0; i < lost.size(); i++) {
		stu[lost[i]]--;
	}

	for (int i = 1; i <= n; i++) {
		if (stu[i] == 2) {
			if (stu[i - 1] == 0) {
				stu[i - 1] = 1;
				stu[i]--;
			}
			else if (stu[i + 1] == 0) {
				stu[i + 1] = 1;
				stu[i]--;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (stu[i] > 0)
			answer++;
	}

	return answer;
}

int main() {
	int n = 5;
	vector<int> l = { 2,4 };
	vector<int> r = { 3 };

	cout << solution(n, l, r);
}