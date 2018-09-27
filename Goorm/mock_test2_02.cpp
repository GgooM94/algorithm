#include<stdio.h>

/* [Notice for C/C++]
* - �⺻ �����Ǵ� ���� �ڵ�� ������� ���ظ� �������� �����Ǿ����ϴ�.
* - �����ڵ��� Ȱ���� ���û����̸� �ڵ带 ���� �ۼ��Ͽ��� �����մϴ�.
*
* - ������ ���� ó���� �ý�����, ��Ʈ��ũ/�������� ���� ���� ������
* - main�� int������ ������ �� return 0�� �׻� �ϴ� ���� �����մϴ�
* - �������� �迭 ũ�⿡ ���� Stack Overflow ������ �����ϼ���
* - (C++) cin/cout���� scanf/printf�� ����ϱ⸦ �����մϴ�. (����� ���ɿ� ���� ����)
*/

int myAbs(const int&a, const int&b) {
	if (a - b >0)
		return a - b;
	else
		return (a - b)*-1;
}

int main()
{   //���α׷��� ���ۺ� 
	//ù ��° �� P�� ��ǥ 
	int px, py;
	//�� ��° �� Q�� ��ǥ
	int qx, qy;
	scanf("%d %d", &px, &py);
	scanf("%d %d", &qx, &qy);

	if (px == qx && py == qy)
	{
		printf("DOT\n");
	}
	else if (px == qx || py == qy)
	{
		printf("SEGMENT\n");
	}
	else
	{
		if (myAbs(px, qx) == myAbs(py, qy))
			printf("SQUARE\n");
		else
			printf("RECTANGLE\n");
	}

	return 0;
}