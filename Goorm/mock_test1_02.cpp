#include <iostream>
#include <algorithm>
using namespace std;

/**
@description
�ϳ��� ��(��ǥ)�� ��Ÿ���� ����ü
**/
struct point_t {
	int x;
	int y;
	point_t(int x = 0, int y = 0)
		:x(x), y(y) {}
};

class rect {
public:
	int top, bot, left, right;
	rect(const point_t& a, const point_t& b) {
		top = max(a.y, b.y);
		bot = min(a.y, b.y);
		left = min(a.x, b.x);
		right = max(a.x, b.x);
	}
};

int get_duplicated_area(point_t p, point_t q, point_t r, point_t s)
{
	int area = 0; //�� �簢���� �����ϴ� ������ ����
	rect box1(p, q);
	rect box2(r, s);

	int top, bot, left, right;

	top = min(box1.top, box2.top);
	bot = max(box1.bot, box2.bot);
	left = max(box1.left, box2.left);
	right = min(box1.right, box2.right);

	if (top >= bot && left <= right) {
		int width = right - left;
		int height = top - bot;

		area = height * width;

	}
	return area;
}

int main() {
	//�� ���� ������ ����ü ������ �����Ѵ� 
	point_t p, q, r, s;

	//�� ���� ��ǥ�� ���Ŀ� �°� �Է¹޴´�
	cin >> p.x >> p.y;
	cin >> q.x >> q.y;
	cin >> r.x >> r.y;
	cin >> s.x >> s.y;

	//�־��� �Լ��� ���� �����ϴ� ������ ���̸� ����Ѵ�
	int answer = get_duplicated_area(p, q, r, s);

	//������ ���Ŀ� �°� ����Ѵ�.
	cout << answer << "\n";
	return 0;
}
