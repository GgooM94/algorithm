#include<iostream>
//재귀함수를 이용한 분할정복
//필수 조건 : n은 자연수
//1 + 2 + .... +n을 반환한다.
int fastSum(int n) {
	//기저 사례
	if (n == 1)return 1;
	//홀수 일 경우
	if (n % 2 == 1)return fastSum(n - 1) + n;
	return 2 * fastSum(n / 2) + (n / 2)*(n / 2);
}
int main(void) {
	std::cout << fastSum(11);
}