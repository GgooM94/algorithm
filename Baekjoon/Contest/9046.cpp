#include<iostream>
#include<string>
#include<algorithm>
#include<memory.h>
#include<limits>
typedef unsigned short US;
using namespace std;

US N, i;
US maxn(0);
US cnt[26];
string str;
bool flag = false;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	cin.ignore();
	while (N--)
	{
		getline(cin, str);
		flag = false;
		maxn = 0;
		memset(cnt, 0, sizeof(cnt));


		for (i = 0; i < str.size(); i++) {
			if (str[i] == ' ') continue;
			cnt[str[i] - 'a']++;		
		}
		for (i = 1; i < 26; i++) {		
			if (cnt[maxn] < cnt[i]) {
				maxn = i;
				flag = false;
			}
			else if (cnt[maxn] == cnt[i]) {
				flag = true;
			}
		}

		if (flag == true)
			cout << "?\n";
		else
			cout << (char)(maxn+97)<<"\n";
	}
}