#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

	vector<int>DP(n + 1, 0);
	DP[0] = 1;
	DP[1] = 1;
	for (int i = 2; i <= n; i++)
		DP[i] = DP[i - 1] + DP[i - 2];
	answer = DP[n];
	return answer;
}

int main() {
	int n;
	cin >> n;
	cout << solution(n);

}
