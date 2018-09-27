#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

/* [Notice for C/C++]
* - �⺻ �����Ǵ� ���� �ڵ�� ������� ���ظ� �������� �����Ǿ����ϴ�.
* - �����ڵ��� Ȱ���� ���û����̸� �ڵ带 ���� �ۼ��Ͽ��� �����մϴ�.
*
* - �������� �Է°� ����� stdin�� stdout�� ���ϰ� scanf�� printf�� ����ϼ���
* - ������ ���� ó���� �ý�����, ��Ʈ��ũ/�������� ���� ���� ������
* - main�� int������ ������ �� return 0�� �׻� �ϴ� ���� �����մϴ�
* - �������� �迭 ũ�⿡ ���� Stack Overflow ������ �����ϼ���
* - (C++) cin/cout���� scanf/printf�� ����ϱ⸦ �����մϴ�. (����� ���ɿ� ���� ����)
*/

struct team
{
	int index;
	int score;
};

bool cmp(const team& a, const team& b) {
	return a.score > b.score;
}

int main()
{   //���α׷��� ���ۺ� 
	int N, M;
	int P, Q;
	scanf_s("%d %d", &N, &M);
	vector<team>arr(N + 1);
	for (int i = 1; i < arr.size(); i++) {
		arr[i].index = i;
		arr[i].score = 0;
	}

	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &P, &Q);

		if (P <= 0 || P > N || Q <= 0 || Q >N)
			continue;
		if (P == Q)
			continue;
		arr[P].score += 5;
		arr[Q].score += 3;
	}
	stable_sort(arr.begin() + 1, arr.end(), cmp);


	int grade = 1;
	printf("%d %d %d\n", grade, arr[1].index, arr[1].score);

	for (int i = 2; i < arr.size(); i++) {
		if (arr[i - 1].score != arr[i].score) {
			printf("%d %d %d\n", i, arr[i].index, arr[i].score);
			grade = i;
		}
		else {
			printf("%d %d %d\n", grade, arr[i].index, arr[i].score);
		}

	}
	return 0;
}