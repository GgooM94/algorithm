#include<iostream>
#include<string>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str[8];
	int i,j,cnt(0);
	bool oddNum = true;
	for (i = 0; i < 8; i++) {
		cin >> str[i];
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (!(i &1) && !(j&1)  && str[i][j] == 'F') {
				cnt++;
			}
			else if (i & 1  && j & 1 && str[i][j] == 'F') {
				cnt++;
			}
		}
	}
	cout << cnt;
}

