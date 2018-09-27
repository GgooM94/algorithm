#include<iostream>
#include<vector>

using namespace std;


/**
@description
�κ� �湮 ������ ���� ��Ÿ m�� ä���ִ� �Լ�

@param m	�κ� �湮 ������ ������ r�� c���� ����, m[i][j] := (i�� j��)ĭ�� �κ��� �湮 ���� ��ȣ
@param r	���� ��
@param c	���� ��
*/
void simulate(vector<vector<int> > &m, int r, int c)
{
	int nowR = 0;
	int nowC = 0;
	int copyR = r - 1;
	int copyC = c;
	int cnt = 1;
	while (true)
	{
		if (cnt > r*c)
			break;
		for (int i = 0; i < copyC; i++) {
			m[nowR][nowC] = cnt;
			nowC++;
			cnt++;
		}
		copyC--;
		nowC--;
		nowR++;

		if (cnt > r*c)
			break;
		for (int i = 0; i < copyR; i++) {
			m[nowR][nowC] = cnt;
			nowR++;
			cnt++;
		}
		copyR--;
		nowR--;
		nowC--;

		if (cnt > r*c)
			break;
		for (int i = 0; i < copyC; i++) {
			m[nowR][nowC] = cnt;
			nowC--;
			cnt++;
		}
		copyC--;
		nowR--;
		nowC++;

		if (cnt > r*c)
			break;
		for (int i = 0; i < copyR; i++) {
			m[nowR][nowC] = cnt;
			nowR--;
			cnt++;
		}
		copyR--;
		nowR++;
		nowC++;
	}
}

/*
** ���� �Լ����� �׽�Ʈ���̽��� ����¿� ���� �⺻���� ���� �ڵ尡 �ۼ��Ǿ� �ֽ��ϴ�.
** ����� �Լ��� �ϼ��Ͽ��� ������ �ذ��� �� ������,
** ���� �Լ��� ������ �� ������ �ڵ带 ��� �ۼ��Ͽ��� �����մϴ�.
** ��, ������ �ۼ��� �ڵ�� ���� �߻��� ���� ���� ��� �����ڿ��� å���� �ֽ��ϴ�.
*/
int main() {
	ios_base::sync_with_stdio(false);

	//�׽�Ʈ���̽��� ���� �Է� �޴´� 
	int caseNum;
	cin >> caseNum;

	//������� �� �׽�Ʈ���̽��� �����͸� �Է¹ް� ������ ����Ѵ�
	for (int caseIndex = 1; caseIndex <= caseNum; caseIndex++)
	{
		//��� ���� ���� �Է¹޴´�
		int r, c;
		cin >> r >> c;

		//0���� �ʱ�ȭ �� r�� c���� ���͸� �����Ѵ�
		vector<vector<int> > m(r, vector<int>(c));

		//�־��� �Լ��� �����Ͽ� �� ĭ�� �κ� û�ұⰡ �湮�ϴ� ������ ���Ϳ� ����Ѵ�
		simulate(m, r, c);

		//���̽� ��ȣ�� ����Ѵ�
		cout << "Case #" << caseIndex << "\n";

		//�� ĭ�� �湮 ������ ��� ���Ŀ� �°� ����Ѵ�
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (j > 0)
					cout << " ";
				cout << m[i][j];
			}
			cout << "\n";
		}
	}
	return 0;
}