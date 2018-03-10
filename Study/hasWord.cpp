#include<iostream>
#include<vector>
#include<string>
const int dx[8] = { -1,-1,-1,1,1,1,0,0 };
const int dy[8] = { -1,0,1,-1,0,1,-1,1 };
const char board[5][5] = {
	{'S','O','N','G','M' },
	{ 'X','P','V','E','T' },
	{ 'G','L','O','E','T' },
	{ 'X','T','N','Z','Y' },
	{ 'X','O','Q','R','S' }
};
//5x5�� ���� ���� ���� �ش� ��ġ���� �־��� ���ܾ �����ϴ����� ��ȯ
bool inRange(const int &y, const int &x) {
	if (y > 5 || y < -5 || x >5 || x < -5)
		return false;
	else
		return true;
}
bool hasWord(int y, int x, const std::string& word) {
	//���� ��� 1: ���� ��ġ�� ���� ���̸� ������ ����
	if (!inRange(y, x))return false;
	//���� ��� 2: ù ���ڰ� ��ġ���� ������ ����
	if (board[y][x] != word[0])return false;
	//���� ��� 3: �ܾ� ���̰� 1�̸� ����
	if (word.size() == 1)return true;
	//������ ����ĭ�� �˻��Ѵ�.
	for (int direction = 0; direction < 8; direction++) {
		int nextY = y + dy[direction], nextX = x + dx[direction];
		//���� ĭ�� ���� �ȿ� �ִ���, ù ���ڴ� ��ġ�ϴ��� Ȯ���� �ʿ䰡 ����.
		if (hasWord(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;
}
int main(void) {
	std::string word;
	std::cin >> word;
	for (int y = 0; y < 5; y++)
		for (int x = 0; x < 5;x++) {
			if (hasWord(y, x, word))
				std::cout << word << "����";
		}

	
}