#include<iostream>
int const MAX = 246913;
bool arr[MAX] = { 0, };
int main(void) {
	int j;
	arr[1] = 1;
	for (int i = 2; i < MAX / 2; i++) {
		j = 2;
		if (i % 2 == 0 && i != 2)
			continue;
		while (i*j < MAX) {
			arr[i*j] = 1;
			j++;
		}
	}
	int	numA, cnt;
	std::cin.sync_with_stdio(false);
	std::cin >> numA;
	while (numA != 0)
	{
		cnt = 0;
		for (int j = numA + 1; j <= 2 * numA; j++) {
			if (arr[j] == 0)
				++cnt;
		}
		std::cout << cnt << "\n";
		std::cin >> numA;
	}
}