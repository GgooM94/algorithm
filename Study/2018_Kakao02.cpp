/*
������ = �������� ���������� Ŭ���� ���� �� / �������� ������ �÷��̾� ��
��ü �������� �� N, ���� �̿��� ���� ��ġ �������� stages
�������� ���� ������������ ���� �������� �������� ��ȣ�� �ִ� �迭 ����


*/
#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

struct MyStruct
{
	int index;
	int cnt;
	float per;
};

bool cmp(MyStruct a, MyStruct b) {
	return a.per > b.per;
}
vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<MyStruct> map(N + 1);

	for (int i = 1; i <= N; i++) {
		map[i].cnt = 0;
		map[i].index = i;
	}

	for (int i = 0; i < stages.size(); i++) {
		if (stages[i] <= N)
			map[stages[i]].cnt++;
	}


	int sum(0);
	for (int i = 1; i <= N; i++) {
		if (map[i].cnt > 0 && (stages.size() - sum) > 0)
		{
			map[i].per = (float)map[i].cnt / (stages.size() - sum);
		}
		else {
			map[i].per = 0;
		}

		sum += map[i].cnt;
	}

	stable_sort(map.begin() + 1, map.begin() + N + 1, cmp);

	for (int i = 1; i <= N; i++)
		answer.push_back(map[i].index);

	return answer;
}

int main(void) {
	int N;
	vector<int> stages = { 2,1,2,6,2,4,3,3 };
	//	vector<int> stages = {4,4,4,4,4};

	solution(5, stages);
}