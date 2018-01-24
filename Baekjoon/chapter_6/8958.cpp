#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int size(0);
	string inputstr;
	cin >> size;

	string *result = new string[size];
	int *res = new int[size];

	for (int i = 0; i < size; i++) {
		int score(0);
		cin >> inputstr;
		result[i] = inputstr;
		int len = result[i].length();	//for문에 코드중복이 많아 선언
		int *output = new int[len] {0, };	//OX를 점수화 시키기 위해 선언

											//입력한 OX값들을 숫자 0,1로 변환
		for (int k = 0; k < len; k++) {
			if (result[i][k] == 'O')
			{
				output[k] = 1;
			}
		}
		//다름 포문에서 0번째 인수값을 비교하지 않으므로 선언
		if (output[0] == 1)
			++score;

		//이전 값이 정답일경우 점수 가중치를 두기 위해서
		for (int j = 1; j < len; j++) {
			if (output[j - 1] > 0 && output[j] >0) {
				output[j] = output[j - 1] + 1;
			}
			score += output[j];
		}
		res[i] = score;
		delete[] output;	//동적할당 뒤엔 항상 delete!!!!!!!
	}
	for (int i = 0; i < size; i++) {
		cout << res[i] << "\n";
	}
	delete[] result;
}
