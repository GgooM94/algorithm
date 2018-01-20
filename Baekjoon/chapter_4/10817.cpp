#include<iostream>
using namespace std;
int main(void) {
	unsigned short N[3];
	unsigned short temp;
	cin >> N[0] >> N[1] >> N[2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			if (N[i] > N[j])
			{
				temp = N[i];
				N[i] = N[j];
				N[j] = temp;
			}
		}
	}
	cout << N[1];
}
