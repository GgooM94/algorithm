#include<iostream>
int const MAX = 1000001;
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
	int	numA, numB;
	std::cin.sync_with_stdio(false);
	std::cin >> numA >> numB;
	for (int j = numA; j <= numB; j++) {
		if (arr[j] == 0)
			std::cout << j << "\n";
	}
}