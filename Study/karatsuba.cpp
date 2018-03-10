#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
//a += b *(10^k);�� �����Ѵ�.
void addTo(vector<int>&a, const vector<int> &b, int k);
//a -=b;�� �����Ѵ�.
void subFrom(vector<int> &a, const vector<int>&b);
//�� ���� ��
vector<int>multiply(const vector<int> &a, const vector<int> &b);
//�� �� ������ ���� ��ȯ�Ѵ�.

vector<int>karatsuba(const vector<int>&a, const vector<int>&b) {
	int an = a.size(), bn = b.size();
	//a�� b���� ª�� ��� ���� �ٲ۴�.
	if (an < bn)return karatsuba(b, a);
	//���� ���: a�� b�� ��� �ִ� ���
	if (an == 0 || bn == 0)return std::vector<int>();
	//���� ���:a�� ���� ª�� ��� O(n^2)�������� �����Ѵ�.
	if (an <= 50)return multiply(a, b);
	
	int half = an / 2;
	//a�� b�� �ؿ��� half �ڸ��� �������� �и��Ѵ�.
	vector<int>a0(a.begin(), a.begin() + half);
	vector<int>a1(a.begin() + half, a.end());
	vector<int>b0(b.begin(), b.begin() + std::min<int>(b.size(), half));
	vector<int>b1(b.begin() + std::min<int>(b.size(), half), b.end());
	//z2 = a1*b2;
	vector<int>z2 = karatsuba(a1, b1);
	//z0 = a0*b0;
	vector<int>z0 = karatsuba(a0, b0);
	//a0 = a0 + a1; b0 = b0 + b1;
	addTo(a0, a1, 0); addTo(b0, b1, 0);
	//z1 = (a0*b0)-z0-z2;
	vector<int>z1 = karatsuba(a0, b0);
	subFrom(z1, z0);
	subFrom(z1, z2);
	//ret = z0 + z1 *10^half + z2 * 10^(half*2)
	vector<int> ret;
	addTo(ret, z0, 0);
	addTo(ret, z1, half);
	addTo(ret, z2, half + half);
	return ret;
}
//num[]�� �ڸ��� �ø��� ó���Ѵ�.
void normalize(vector<int> &num) {
	num.push_back(0);
	//�ڸ��� �ø��� ó���Ѵ�.
	for (int i = 0; i < num.size() - 1; i++) {
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

int main(void) {
	vector<int> a = { 3,2,1 };
	vector<int> b = { 6,5,4 };
	vector<int> c = karatsuba(a, b);
	for (int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";

}
vector<int>multiply(const vector<int> &a, const vector<int> &b) {
	vector<int>c(a.size() + b.size() + 1, 0);
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < b.size(); j++) {
			c[i + j] += a[i] * b[j];
		}
	normalize(c);
	return c;
}
//a += b *(10^k);�� �����Ѵ�.
void addTo(vector<int>&a, const vector<int> &b, int k) {
	int temp;
	if (k == 0)
		temp = 1;
	for (int i = 0; i < k; i++)
		temp *= 10;
	for (int i = 0; i < a.size(); i++)
		a[i] += b[i]*temp;		
}
//a -=b;�� �����Ѵ�.
void subFrom(vector<int> &a, const vector<int>&b) {
	for (int i = 0; i < a.size(); i++)
		a[i] -= b[i];
}