#include<iostream>
#include<vector>

//num[]의 자릴수 올림을 처리한다.
void normalize(std::vector<int> &num) {
	num.push_back(0);
	//자릿수 올림을 처리한다.
	for (int i = 0; i < num.size()-1; i++) {
		if (num[i] < 0) {
			int borrow = (abs(num[i])) + 9 / 10;
			num[i + 1] -= borrow;
			num[i] += borrow * 10;
		}
		else {
			num[i + 1] += num[i] / 10;
			num[i] %= 10;
		}
	}
	while (num.size() > 1 && num.back() == 0)
		num.pop_back();
}
std::vector<int>multiply(const std::vector<int> &a, const std::vector<int> &b) {
	std::vector<int>c(a.size() + b.size() + 1, 0);
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < b.size(); j++) {
			c[i + j] += a[i] * b[j];
		}		
	normalize(c);
	return c;
}

int main(void) {
	std::vector<int> a = { 3,2,1 };
	std::vector<int> b = { 6,5,4 };
	std::vector<int> c = multiply(a,b);
	for (int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";

}