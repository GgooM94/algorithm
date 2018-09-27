#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/* [Notice for C/C++]
* - �⺻ �����Ǵ� ���� �ڵ�� ������� ���ظ� �������� �����Ǿ����ϴ�.
* - �����ڵ��� Ȱ���� ���û����̸� �ڵ带 ���� �ۼ��Ͽ��� �����մϴ�.
*
* - ������ ���� ó���� �ý�����, ��Ʈ��ũ/�������� ���� ���� ������
* - main�� int������ ������ �� return 0�� �׻� �ϴ� ���� �����մϴ�
* - �������� �迭 ũ�⿡ ���� Stack Overflow ������ �����ϼ���
* - (C++) cin/cout���� scanf/printf�� ����ϱ⸦ �����մϴ�. (����� ���ɿ� ���� ����)
*/

bool cmp(const int& a, const int& b) {
	return a > b;
}
int main()
{   //���α׷��� ���ۺ� 
	int job[5];
	vector<int>arr(4, 0);
	int i;
	int answer; //�� ������ ���� �����Ѵ�
	for (i = 0; i<5; i++) {
		scanf_s("%d", &job[i]);
	}

	sort(job, job + 5, cmp);

	for (int i = 0; i < 5; i++) {
		sort(arr.begin(), arr.end());
		arr[0] += job[i];
	}

	sort(arr.begin(), arr.end(), cmp);
	answer = arr[0];

	//������ ����Ѵ� 
	printf("%d", answer);
	return 0;
}
