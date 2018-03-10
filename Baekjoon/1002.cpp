#include<iostream>
#include<cmath>
int main(void) {
	int i;
	int x1, y1, r1, x2, y2, r2;
	std::cin.sync_with_stdio(false);
	int n;
	std::cin >> n;
	int *result = new int[n];
	for (i = 0; i <n; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int temp = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
		if (temp == 0 && r1 == r2) {
			result[i] = -1;
			continue;
		}
		double distance = sqrt(temp);
		if (r1 + r2 == distance || distance == (r1 > r2 ? r1 - r2 : r2 - r1))
			result[i] = 1;
		else if ((r1 > r2 ? r1 - r2 : r2 - r1) < distance && distance < r1 + r2)
			result[i] = 2;
		else
			result[i] = 0;
	}
	for (i = 0; i < n; i++)
		std::cout << result[i] << "\n";
}