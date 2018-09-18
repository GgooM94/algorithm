#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int ansCnt = 0;
	int tmpCnt = 0;
	int copyN = n;
	while (copyN)
	{
		if (copyN & 1)
			ansCnt++;
		copyN /= 2;
	}

	while (true)
	{
		n++;
		copyN = n;
		tmpCnt = 0;
		while (copyN)
		{
			if (copyN & 1)
				tmpCnt++;
			copyN /= 2;
		}
		if (ansCnt == tmpCnt)
			break;
	}
	answer = n;

	return answer;
}

int main(void) {
	int n;
	cin >> n;

	cout << solution(n);

}