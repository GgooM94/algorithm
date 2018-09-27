#include <iostream>
#include <algorithm>
using namespace std;

/**
@description
하나의 점(좌표)를 나타내는 구조체
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
	int area = 0; //두 사각형이 교차하는 영역의 넓이
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
	//네 점을 저장할 구조체 변수를 선언한다 
	point_t p, q, r, s;

	//네 점의 좌표를 형식에 맞게 입력받는다
	cin >> p.x >> p.y;
	cin >> q.x >> q.y;
	cin >> r.x >> r.y;
	cin >> s.x >> s.y;

	//주어진 함수를 통해 교차하는 영역의 넓이를 계산한다
	int answer = get_duplicated_area(p, q, r, s);

	//정답을 형식에 맞게 출력한다.
	cout << answer << "\n";
	return 0;
}
