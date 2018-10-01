#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<fstream>
using namespace std;

using namespace std;

/*
* Complete the pageCount function below.
*/
int pageCount(int n, int p) {
	int begin, end;
	int page = 1;
	int cnt = 0;
	while (true) {
		if (page >= p) {
			begin = cnt;
			break;
		}
		cnt++;
		page += 2;
	}

	cnt = 0;
	page = n;
	while (true)
	{
		if (page <= p || (page & 1 && page - 1 == p)) {
			end = cnt;
			break;
		}
		cnt++;
		page -= 2;
	}


	return min(begin, end);
}

int main()
{

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int p;
	cin >> p;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = pageCount(n, p);

	cout << result << "\n";


	return 0;
}