#include<iostream>
int board[7][7] = {
	{2,5,1,6,1,4,1},
	{6,1,1,2,2,9,3},
	{7,2,3,2,1,3,1},
	{1,1,3,1,7,1,2},
	{4,1,2,3,4,1,2},
	{3,3,1,2,3,4,1},
	{1,5,2,9,4,7,0}
};
int cache[7][7];
const int SIZE = 7;

//완전 탐색 알고리즘
bool jump1(int y, int x) {
	//기저 사례: 게임판 밖을 벗어난 경우
	if (y >= SIZE || x >= SIZE)return false;
	//기저 사례: 마지막 칸에 도착한 경우
	if (y == SIZE - 1 && x == SIZE - 1) return true;
	int jumpSize = board[y][x];
	return jump1(y + jumpSize, x) || jump1(y, x + jumpSize);
}

//동적 계획법 알고리즘
int jump2(int y, int x) {
	//기저 사례 처리
	if (y >= SIZE || x >= SIZE) return 0;
	if (y == SIZE - 1 && x == SIZE - 1) return 1;
	//메모제이션
	int &ret = cache[y][x];
	if (ret != -1)return ret;
	int  jumpSize = board[y][x];
	return ret = (jump2(y + jumpSize, x) || jump2(y, x + jumpSize));
}
int main(void) {
	//metset()은 두 번째 인자로 주어진 값을 주어진 메모리의 모든 바이트로 채운다.
	//32비트나 64비트 정수형이라면, 엉뚱한 수로 초기화 될 수 있다.
	memset(cache, -1, sizeof(cache));
	std::cout << jump1(0, 0) << "\n";
	std::cout << jump2(0, 3);
}