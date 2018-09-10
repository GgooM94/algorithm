#include<iostream>
#include<algorithm>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout<< min(min(abs(x - w),abs(y-h)), min(abs(x - 0), abs(y - 0)));
}
