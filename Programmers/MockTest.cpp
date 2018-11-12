#include <string>
#include <vector>
#include<algorithm>

using namespace std;
struct IndexStruct
{
	int index = 0;
	int res = 0;
};

bool comp(const IndexStruct& a, const IndexStruct& b) {
	return a.res > b.res;
}
vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<IndexStruct> calc(3);
	vector<int> one = { 1,2,3,4,5 };
	vector<int> two = { 2,1,2,3,2,4,2,5 };
	vector<int> three = { 3,3,1,1,2,2,4,4,5,5 };

	calc[0].index = 1;
	calc[1].index = 2;
	calc[2].index = 3;

	int index1 = 0;
	int index2 = 0;
	int index3 = 0;

	for (int i = 0; i < answers.size(); i++) {
		if (one[index1] == answers[i]) {
			calc[0].res++;
		}
		if (two[index2] == answers[i]) {
			calc[1].res++;
		}
		if (three[index3] == answers[i]) {
			calc[2].res++;
		}

		index1++;
		index2++;
		index3++;
		index1 %= one.size();
		index2 %= two.size();
		index3 %= three.size();
	}

	stable_sort(calc.begin(), calc.end(), comp);

	int maxN = calc[0].res;

	for (int i = 0; i < calc.size(); i++) {
		if (calc[i].res == maxN)
			answer.push_back(calc[i].index);
	}
	return answer;
}
