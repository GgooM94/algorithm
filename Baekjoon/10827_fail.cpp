#include<iostream>
#include<string>
#include<vector>
int i, j;
bool flag = 0;	//자연수 일경우 flag = 0;
std::vector<int>squ(std::vector<int> inputA, std::vector<int> inputB, int b) {
	std::vector<int> result(1000);
	for (i = inputA.size() - 1; i >= 0; i--) {
		for (j = inputB.size() - 1; j >= 0; j--) {
			result[i + j] += inputA[i] * inputB[j];
		}
	}
	if(flag ==0)result[inputA.size() + inputB.size()] += 1;
	for (j = result.size() - 1; j >= 0; j--) {
		if (result[j] == 0 && flag ==1)
			result.pop_back();
		else if (result[j] == 0 && flag == 0)
			result.pop_back();
		else if (b > 0)
		{
			if(flag ==0)result.pop_back();
			return squ(inputA, result, b - 1);
		}		
		else {
			if (flag == 0)result.pop_back();
			return result;
		}
			
	}
}

int main(void) {
	using namespace std;
	string a;
	int b;
	int point(0);

	vector<int> input;
	vector<int> result;
	cin >> a >> b;
	for (i = 0; i < a.size(); i++) {
		if (a[i] != '.')
			input.push_back(a[i] - 48);
		else {
			point = a.size() - i - 1;	//소수점 위치 계산
			flag = 1;
		}
	}
	point *= b;	//제곱 값 소수점 위치 계산.
	if (b >= 2)
		result = squ(input, input, b - 2);
	else
		result = input; //a^1

	for (int i = result.size() - 1; i > 0; i--) {
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	for (i = 0; i < result.size(); i++) {
		if (i == result.size() - point)
			cout << '.';
		cout << result[i];
	}
}