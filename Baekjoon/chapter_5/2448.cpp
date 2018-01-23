#include<iostream>
using namespace std;
#define W 6144
#define H 3072
char arr[H][W];
void star(int n, int width, int height) {
	if (n == 3) {
		arr[height][width] = '*';
		arr[height + 1][width - 1] = '*';
		arr[height + 1][width + 1] = '*';
		arr[height + 2][width - 2] = '*';
		arr[height + 2][width - 1] = '*';
		arr[height + 2][width] = '*';
		arr[height + 2][width + 1] = '*';
		arr[height + 2][width + 2] = '*';
		return;
	}
	star(n / 2, width, height);
	star(n / 2, width - (n / 2), height + (n / 2));
	star(n / 2, width + (n / 2), height + (n / 2));
}

int main(void) {
	int n(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (j == 2 * n - 1)
				//끝에 NULL값 입력
				arr[i][j] = '\0';
			else {
				arr[i][j] = ' ';
			}
		}
	}

	star(n, n - 1, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++)
		{
			cout << arr[i][j];
		}
		cout << "\n";
	}
}