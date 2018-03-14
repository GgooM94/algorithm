#include<iostream>
int const MAX = 10001;
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
	int	numA, numB, tot(0), min(0);
	std::cin.sync_with_stdio(false);
	std::cin >> numA >> numB;
	for (int j = numA; j <= numB; j++) {
		if (arr[j] == 0) {
			if (min == 0)
				min = j;
			tot += j;
		}

	}
	if (tot == 0) {
		tot = -1;
		std::cout << tot;
	}
	else
	{
		std::cout << tot << "\n" << min;
	}

}