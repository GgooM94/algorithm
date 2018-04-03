#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tot(0);
	int arr[3][5] = { 0 };
	string res[5] = { "D","C","B","A","E" };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
			tot += arr[i][j];
		}
		cout << res[tot]<<"\n";
		tot = 0;
	
	}
}