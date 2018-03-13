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

//���� Ž�� �˰���
bool jump1(int y, int x) {
	//���� ���: ������ ���� ��� ���
	if (y >= SIZE || x >= SIZE)return false;
	//���� ���: ������ ĭ�� ������ ���
	if (y == SIZE - 1 && x == SIZE - 1) return true;
	int jumpSize = board[y][x];
	return jump1(y + jumpSize, x) || jump1(y, x + jumpSize);
}

//���� ��ȹ�� �˰���
int jump2(int y, int x) {
	//���� ��� ó��
	if (y >= SIZE || x >= SIZE) return 0;
	if (y == SIZE - 1 && x == SIZE - 1) return 1;
	//�޸����̼�
	int &ret = cache[y][x];
	if (ret != -1)return ret;
	int  jumpSize = board[y][x];
	return ret = (jump2(y + jumpSize, x) || jump2(y, x + jumpSize));
}
int main(void) {
	//metset()�� �� ��° ���ڷ� �־��� ���� �־��� �޸��� ��� ����Ʈ�� ä���.
	//32��Ʈ�� 64��Ʈ �������̶��, ������ ���� �ʱ�ȭ �� �� �ִ�.
	memset(cache, -1, sizeof(cache));
	std::cout << jump1(0, 0) << "\n";
	std::cout << jump2(0, 3);
}