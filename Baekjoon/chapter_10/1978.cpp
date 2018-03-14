#include<iostream>
int const MAX = 1001;
bool arr[MAX] = { 0, };
int main(void) {
	int j;
	arr[1] = 1;
	for (int i = 2; i < MAX / 2; i++) {
		j = 2;
		if (i % 2 == 0 && i != 2)
			continue;
		while (i*j < 1001) {
			arr[i*j] = 1;
			j++;
		}
	}
	int N, num, cnt(0);
	std::cin.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> num;
		if (arr[num] == 0)
			cnt++;
	}
	std::cout << cnt;
}