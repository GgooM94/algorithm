#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool flag = 0; //시작이 0. 으로 시작할 경우 flag는 1로 변한다.
void normalize(vector<int> &num) {
	num.push_back(0);
	int i;
	//자릿수 올림을 처리한다.
	for (i = 0; i < num.size() - 1; i++) {
		num[i + 1] += num[i] / 10;
		num[i] %= 10;
	}
	while (num.size() > 1 && num.back() == 0)
		num.pop_back();
	if (flag == 1) {
		num.pop_back();
		num.pop_back();
	}
}
vector<int>multiply(const vector<int> &a, const vector<int> &b, int n) {
	vector<int>c(a.size() + b.size() + 1, 0);
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			c[i + j] += a[i] * b[j];
		}
	}
	if(flag ==1) c[a.size() + b.size()] = 1;
	normalize(c);
	if (n > 0)return multiply(c, b, n - 1);
	return c;
}

int main(void) {
	string a;
	int b;
	int point(0);
	vector<int> input;
	vector<int> c;
	cin >> a >> b;
	if (a[0]-48 == 0) flag = 1;
	for (int i = a.size()-1; i >=0; i--) {
		if (a[i] != '.')
			input.push_back(a[i] - 48);
		else {		
			point = a.size() - i - 1;	//소수점 위치 계산
		}
	}
	point *= b;
	if (b >= 2)
		c = multiply(input, input, b - 2);
	else
		c = input;

	for (int i = c.size() - 1; i >= 0; i--) {
		if (i ==point-1)
			cout << '.';
		std::cout << c[i];
	}
}