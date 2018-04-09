#include<iostream>
#include<math.h>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T,a,b,i;
	int arr[4];
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		for (i = 0; i < 4; i++) {
			arr[i] = (int)pow(a, i+1) % 10;
		}
		if (b % 4 == 0)
			b = 3;
		else b = b % 4 - 1;
		cout << (arr[b] == 0 ? 10 : arr[b]) << "\n";
	}
}	
