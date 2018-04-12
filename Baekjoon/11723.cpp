#include<iostream>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int M;
	int bitmask(0);
	char *str = new char[10];
	int tmp;
	cin >> M;
	while (M--)
	{
		cin >> str;
		switch (str[1])
		{
		case 'd':
			cin >> tmp;
			bitmask |= (1 << tmp);
			break;
		case 'e':
			cin >> tmp;
			bitmask ^= (1 << tmp);
			break;
		case 'h':
			cin >> tmp;
			cout << ((bitmask >> tmp) & 1) << "\n";
			break;
		case 'o':
			cin >> tmp;
			bitmask ^= (1 << tmp);
			break;
		case 'l':
			bitmask |= ((1 << 21) - 1);
			break;
		case 'm':
			bitmask = 0;
			break;
		}
	}
}