#include<iostream>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C;
	cin >> A >> B >> C;
	cout << max(B - A, C - B) - 1;
}