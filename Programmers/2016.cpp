#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	vector<string>ans = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
	int day = b;
	for (int i = 1; i <a; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			day += 31;
			break;
		case 2:
			day += 29;
			break;
		default:
			day += 30;
			break;
		}
	}
	day %= 7;
	answer = ans[day];

	return answer;
}