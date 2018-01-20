#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string *arr = new string[2];
	string *res = new string[2];
	bool TRUE = true;
	cin >> *arr;
	*res = *arr;
	int count(0);

	while (TRUE) {
		if ((*arr)[1] == NULL)
		{
			(*arr)[1] = (*arr)[0];
			(*arr)[0] = '0';
		}
		string *temp = new string[1];
		int result = (*arr)[0] + (*arr)[1] - '0';

		if (result > 9 + '0') {
			result -= 10;
		}
		(*temp)[0] = (*arr)[1];
		(*arr)[1] = result;
		(*arr)[0] = (*temp)[0];

		delete[] temp;
		++count;

		if (*res == *arr)
		{
			TRUE = false;
		}
	}
	cout << count;
	delete[] res;
	delete[] arr;
}

