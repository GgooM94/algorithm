#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


/**
@description
��ǰ ���߿� �ʿ��� ������ �Ķ���ͷ� �޾� ��ǰ ���߿� �ʿ��� �ּ��� Ư�� ������ ���� ����Ͽ� ��ȯ���ִ� �Լ�

@param n      ���� X���� ���� �� �ִ� �⺻ ������ ������
@param g      ��ǰ ���߿� �ʿ��� Ư�� �ռ� ������ ��
@param needs  ��ǰ ���߿� �ʿ��� N���� �⺻ ������ ��
@return       ��ǰ ���߿� �ʿ��� �ּ��� Ư�� ���� X�� ����
*/
bool cmp(const int& a, const int& b) {
	return a > b;
}
int get_least_quantities(int n, int g, vector<int>& needs)
{
	int res;
	int cnt = 0;
	sort(needs.begin(), needs.end(), cmp);
	res = needs[0] / 50;

	if (needs[0] - needs[0] / 50 * 50 > 0) {
		res = needs[0] / 50 + 1;
	}

	vector<int>arr(n, res * 50);

	for (int i = 0; i < n; i++) {
		arr[i] -= needs[i];
	}
	while (cnt != g)
	{
		sort(arr.begin(), arr.end(), cmp);
		arr[0]--;
		arr[1]--;
		arr[2]--;
		g--;

		if (arr[0] < 0 || arr[1] < 0 || arr[2] < 0) {
			for (int i = 0; i < n; i++) {
				arr[i] += 50;
			}
			res++;
		}
	}
	return res;
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
		//�⺻ ������ �� N�� �ʿ��� Ư�� �ռ� ������ �� G�� �Է¹޴´�.
		int n, g;
		cin >> n >> g;

		//�� ������ �ʿ��� ���� ���ʷ� �Է¹޾� ���Ϳ� �����Ѵ�
		vector<int> needs(n);
		for (int i = 0; i < n; i++) {
			cin >> needs[i];
		}

		//�־��� �Լ��� �̿��� ������ ����Ѵ�
		int answer = get_least_quantities(n, g, needs);

		//���Ŀ� �°� ������ ����Ѵ�
		cout << "Case #" << caseIndex << "\n";;
		cout << answer << "\n";
	}

	return 0;
}