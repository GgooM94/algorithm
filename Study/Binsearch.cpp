#include<iostream>
#include<vector>
int binsearch(const std::vector<int> arr, int x) {
	int n = arr.size();
	int lo =-1, hi = n;
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (arr[mid] < x)
			lo = mid;
		else
			hi = mid;
	}
	return hi;
}

int main(void) {
	using std::cout;
	using std::cin;
	int x;
	std::vector<int> arr = { 1,2,3,4,5,6,7,8,9,10 };
	cin >> x;
	cout << binsearch(arr,x);
}
