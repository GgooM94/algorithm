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
//5x5의 보글 게임 판의 해당 위치에서 주어진 ㄴ단어가 시작하는지를 반환
bool inRange(const int &y, const int &x) {
	if (y > 5 || y < -5 || x >5 || x < -5)
		return false;
	else
		return true;
}
bool hasWord(int y, int x, const std::string& word) {
	//기저 사례 1: 시작 위치가 범위 밖이면 무조건 실패
	if (!inRange(y, x))return false;
	//기저 사례 2: 첫 글자가 일치하지 않으면 실패
	if (board[y][x] != word[0])return false;
	//기저 사례 3: 단어 길이가 1이면 성공
	if (word.size() == 1)return true;
	//인접한 여덟칸을 검사한다.
	for (int direction = 0; direction < 8; direction++) {
		int nextY = y + dy[direction], nextX = x + dx[direction];
		//다음 칸이 범위 안에 있는지, 첫 글자는 일치하는지 확인할 필요가 없다.
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
				std::cout << word << "존재";
		}

	
}