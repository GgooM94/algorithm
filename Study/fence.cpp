#include<iostream>
#include<vector>
#include<algorithm>

using std::vector;

//�� ������ ���̸� �����ϴ� �迭
vector<int>h;
//h[left..right] �������� ã�Ƴ� �� �ִ� ���� ū �簢���� ���̸� ��ȯ�Ѵ�.
int solve(int left, int right) {
	//���� ���: ���ڰ� �ϳ��ۿ� ���� ���
	if (left == right) return h[left];
	//[left,mid],[mid+1,right]�� �� �������� ������ �����Ѵ�.
	int mid = (left + right) / 2;
	//������ ������ ��������
	int ret = std::max(solve(left, mid), solve(mid + 1, right));
	//�κ� ���� 3: �� �κп� ��� ��ġ�� �簢�� �� ���� ū���� ã�´�.
	int lo = mid, hi = mid + 1;
	int height = std::min(h[lo], h[hi]);
	//[mid,mid+1]�� �����ϴ� �ʺ� 2�� �簢���� ����Ѵ�.
	ret = std::max(ret, height * 2);
	//�簢���� �Է� ��ü�� ���� ������ Ȯ���� ������.
	while (left < lo || hi < right) {
		//�׻� ���̰� �� ���� ������ Ȯ���Ѵ�.
		if (hi < right && (lo == left || h[lo - 1] < h[hi + 1])) {
			++hi;
			height = std::min(height, h[hi]);
		}
		else {
			--lo;
			height = std::min(height, h[lo]);
		}
		//Ȯ���� �� �簢���� ����
		ret = std::max(ret, height*(hi - lo + 1));
	}
	return ret;
}