#include<iostream>
//����Լ��� �̿��� ��������
//�ʼ� ���� : n�� �ڿ���
//1 + 2 + .... +n�� ��ȯ�Ѵ�.
int fastSum(int n) {
	//���� ���
	if (n == 1)return 1;
	//Ȧ�� �� ���
	if (n % 2 == 1)return fastSum(n - 1) + n;
	return 2 * fastSum(n / 2) + (n / 2)*(n / 2);
}
int main(void) {
	std::cout << fastSum(11);
}