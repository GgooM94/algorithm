#include<iostream>
#include<string>
using namespace std;

class Q {
private:
	int *arr;
	int s, f, r;

public:
	Q();
	~Q();
	void push(const int& input);
	void pop();
	void size() { cout << s << '\n'; }
	void empty() { f == r ? (cout << "1\n") : (cout << "0\n"); }
	void front();
	void back();
};
Q::Q()
{
	arr = new int[10001];
	s = 0;
	f = 0;
	r = 0;
}
Q::~Q()
{
	delete[] arr;
}
void Q::push(const int& input)
{
	arr[r] = input;
	r++;
	s++;
}

void Q::pop()
{
	if (s == 0) {
		cout << "-1\n";
	}
	else {
		cout << arr[f] << '\n';
		arr[f] = 0;
		f++;
		s--;
	}
}
void Q::front()
{
	if (s == 0)
		cout << "-1\n";
	else
		cout << arr[f] << '\n';
}

void Q::back()
{
	if (s == 0)
		cout << "-1\n";
	else
		cout << arr[r - 1] << '\n';
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	Q que;
	string str;
	int N, num;
	cin >> N;

	while (N--)
	{
		cin >> str;
		switch (str[1])
		{
		case 'u':
			cin >> num;
			que.push(num);
			break;

		case 'o':
			que.pop();
			break;

		case 'i':
			que.size();
			break;

		case 'm':
			que.empty();
			break;

		case 'r':
			que.front();
			break;

		case 'a':
			que.back();
			break;
		default:
			break;
		}
	}
}