#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int **arr;
	arr = new int*[N];

	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	int x(0), y(0), cnt(1);
	int copyX = N;
	int copyY = N - 1;

	while (true)
	{
		for (int i = 0; i < copyX; i++) {
			arr[y][x] = cnt;
			cnt++;
			x++;
		}
		if (cnt - 1 >= N*N)
			break;
		copyX--;
		x--;
		y++;

		for (int i = 0; i < copyY; i++) {
			arr[y][x] = cnt;
			cnt++;
			y++;
		}
		if (cnt - 1 >= N*N)
			break;
		copyY--;
		x--;
		y--;

		for (int i = 0; i < copyX; i++) {
			arr[y][x] = cnt;
			cnt++;
			x--;
		}
		if (cnt - 1 >= N*N)
			break;
		copyX--;
		x++;
		y--;

		for (int i = 0; i < copyY; i++) {
			arr[y][x] = cnt;
			cnt++;
			y--;
		}
		if (cnt - 1 >= N*N)
			break;
		copyY--;
		x++;
		y++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;

}