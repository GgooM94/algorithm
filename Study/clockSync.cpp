#include<iostream>
#include<vector>
const int INF = 9999, SWITCHES = 10, CLOCKS = 16;
//linked[i][j] = 'x': i �� ����ġ�� j�� �ð谡 ����Ǿ� �ִ�.
//linked[i][j] = '.':i �� ����ġ�� j�� �ð谡 ����Ǿ� ���� �ʴ�.
//CLOCKS + 1 : NULL�� ����
const char linked[SWITCHES][CLOCKS + 1] = {
	//0123456789012345
	 "xxx.............",
	 "...x...x.x.x....",
	 "x...xxxx........",
	 "......xxx.x.x...",
	 "x.x...........xx",
	 "...x..........xx",
	 "....xx.x......xx",
	 ".xxxxx..........",
	 "...xxx...x...x.."
};
//��� �ð谡 12�ø� ����Ű�� �ִ��� Ȯ���Ѵ�.
bool areAligned(const std::vector<int>& clocks);
int min(const int &ret,const int &cnt);
//switch�� ����ġ�� ������.
void push(std::vector<int>&clocks, int swtch) {
	for (int clock = 0; clock < CLOCKS; ++clock) {
		if (linked[swtch][clock] == 'x') {
			clocks[clock] += 3;
			if (clocks[clock] == 15) clocks[clock] = 3;
		}
	}	
}
//clocks : ���� �ð���� ����
//swtch : �̹��� ���� ����ġ�� ��ȣ
//�� �־��� ��, ���� ����ġ���� ������ clocks�� 12�÷� ���� �� �ִ� �ּ� Ƚ���� ��ȯ�Ѵ�.
//���� �Ұ����ϴٸ� INF �̻��� ū ���� ��ȯ�Ѵ�.
int solve(std::vector<int>&clocks, int swtch) {
	if (swtch == SWITCHES)return areAligned(clocks) ? 0 : INF;
	int ret = INF;
	for (int cnt = 0; cnt < 4; ++cnt) {
		ret = min(ret, cnt + solve(clocks, swtch + 1));
		push(clocks, swtch);
	}
	return ret;
}
int main(void) {
	int n;
	int time;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::vector<int>clocks;
		for (int j = 0; j < 16; j++) {
			std::cin >> time;
			clocks.push_back(time);
		}
		std::cout << solve(clocks,0);
	}
}
bool areAligned(const std::vector<int>& clocks) {
	for (int i = 0; i < clocks.size(); i++) {
		if (clocks[i] != 12) return false;
	}
	return true;
}
//ret , cnt�� ���� �� ��ȯ
int min(const int &ret, const int &cnt) {
	return ret > cnt ? cnt : ret;
}