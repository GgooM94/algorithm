/*
기회는 총 3번
0점~ 10점

s 1제곱
d 2제곱
t 3제곱
* 해당점수, 이전 점수 2배
# 해당 마이너스

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