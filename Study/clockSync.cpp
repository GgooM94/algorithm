#include<iostream>
#include<vector>
const int INF = 9999, SWITCHES = 10, CLOCKS = 16;
//linked[i][j] = 'x': i 번 스위치와 j번 시계가 연결되어 있다.
//linked[i][j] = '.':i 번 스위치와 j번 시계가 연결되어 있지 않다.
//CLOCKS + 1 : NULL값 포함
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
//모든 시계가 12시를 가리키고 있는지 확인한다.
bool areAligned(const std::vector<int>& clocks);
int min(const int &ret,const int &cnt);
//switch번 스위치를 누른다.
void push(std::vector<int>&clocks, int swtch) {
	for (int clock = 0; clock < CLOCKS; ++clock) {
		if (linked[swtch][clock] == 'x') {
			clocks[clock] += 3;
			if (clocks[clock] == 15) clocks[clock] = 3;
		}
	}	
}
//clocks : 현재 시계들의 상태
//swtch : 이번에 누를 스위치의 번호
//가 주어질 때, 남은 스위치들을 눌러서 clocks를 12시로 맞출 수 있는 최소 횟수를 반환한다.
//만약 불가능하다면 INF 이상의 큰 수를 반환한다.
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
//ret , cnt중 작은 수 반환
int min(const int &ret, const int &cnt) {
	return ret > cnt ? cnt : ret;
}