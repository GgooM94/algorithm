/*
��ȸ�� �� 3��
0��~ 10��

s 1����
d 2����
t 3����
* �ش�����, ���� ���� 2��
# �ش� ���̳ʽ�

*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(void) {

	string str;
	cin >> str;

	int score[4] = { 0,0,0,0 };
	int index(1);
	bool isPrevNum = false;
	for (int i = 0; i < str.size(); i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			if (isPrevNum == false) {
				isPrevNum = true;
				score[index] = str[i] - '0';
				index++;
			}
			else {
				score[index - 1] = 10;
			}

		}
		else {
			switch (str[i])
			{
			case 'S':
				break;
			case 'D':
				score[index - 1] = pow(score[index - 1], 2);
				break;
			case 'T':
				score[index - 1] = pow(score[index - 1], 3);
				break;
			case '*':
				score[index - 1] *= 2;
				score[index - 2] *= 2;
				break;
			case '#':
				score[index - 1] *= -1;
				break;
			}
			isPrevNum = false;
		}
	}

	int sum(0);
	for (int i = 1; i <= 3; i++)
		sum += score[i];
	cout << sum;
}