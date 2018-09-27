#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;
struct Point
{
	int x, y;
};

vector<Point>arr(4);
vector<Point>temp(4);

vector<Point>input;
int res;

bool cmp(const Point& a, const Point& b) {
	return a.x < b.x;
}

int calc(const Point& a, const Point& b) {
	return ((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}
void DFS(int start, int n) {
	if (n == 4) {
		int index = 1;
		int maxNum = calc(arr[0], arr[1]);
		temp = arr;

		for (int i = 2; i < n; i++) {
			if (maxNum < calc(arr[0], arr[i])) {
				maxNum = calc(arr[0], arr[i]);
				index = i;
			}
		}
		swap(temp[index], temp[3]);

		if (calc(temp[0], temp[1]) == calc(temp[0], temp[2]) && calc(temp[3], temp[1]) == calc(temp[3], temp[2]) && calc(temp[0], temp[3]) == calc(temp[1], temp[2]) && calc(temp[0], temp[1]) == calc(temp[3], temp[1])) {
			res = max(res, min(calc(temp[0], temp[1]), calc(temp[1], temp[2])));
		}
		return;
	}

	for (int i = start; i < input.size(); i++) {
		arr[n] = input[i];
		DFS(i + 1, n + 1);
	}
}
int main()
{   //프로그램의 시작부 
	int N;
	res = 0;
	scanf_s("%d", &N);
	input.resize(N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d %d", &input[i].x, &input[i].y);
	}
	sort(input.begin(), input.end(), cmp);

	DFS(0, 0);

	printf("%0.2f\n", (double)res);
	return 0;
}