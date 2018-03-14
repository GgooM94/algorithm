#include<cstdio>
int const MAX = 10001;
bool arr[MAX] = { 0, };
using namespace std;
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
	int	N, num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		int temp = num / 2;
		int left(1), right(1);
		if (arr[temp] == 0) {
			printf("%d %d\n", temp, temp);
			continue;
		}
		while (true) {
			if (arr[temp - left] == 0 && arr[temp + right] == 0 && (2 * temp + right - left) == num)
				break;
			if (arr[temp - left] != 0 || (2 * temp + right - left) >num) left++;
			if (arr[temp + right] != 0 || (2 * temp + right - left) <num) right++;
		}
		printf("%d %d\n", temp - left, temp + right);
	}
}