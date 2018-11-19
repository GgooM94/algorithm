#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	vector<char>arr(N + 1, 1);

	for (int i = 2; i <= N; i++) {
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 0;
		}

	}
	for (int i = 2; i <= N; i++) {
		if (arr[i] == 1) {
			cout << i << " ";
			answer += i;
		}

	}

	return answer;
}

int main() {
	int n;
	cin >> n;

	cout << solution(n);
}