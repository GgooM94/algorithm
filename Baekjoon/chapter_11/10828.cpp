#include<iostream>
#include<cstring>
const int MAX = 10001;
struct arr
{
	int top;
	int size;
	int list[MAX];
};
using namespace std;
void push(arr& stack, const int& num) {
	++stack.size;
	stack.list[stack.top++] = num;
}
void pop(arr& stack) {
	--stack.size;
	--stack.top;
	cout << stack.list[stack.top] << "\n";;
}
void size(const arr& stack) {
	cout << stack.size <<"\n";
}
int empty(const arr& stack) {
	if (stack.size == 0)
		return 1;
	return 0;	
}
int top(const arr& stack) {
	if (stack.size == 0)
		return -1;
	return stack.list[stack.top - 1];
}

int main(void) {
	int N,num;
	arr stack = { 0,0};
	cin >> N;
	for (int i = 0; i < N; i++) {
		char cmd[10];
		cin >> cmd;	
		if (strcmp(cmd, "push") == 0) {
			cin >> num;
			push(stack, num);
		}
		else if (strcmp(cmd, "pop") == 0) {
			if(stack.size>0)pop(stack);
			else cout << "-1\n";
		}	
		else if (strcmp(cmd, "size") == 0)
			size(stack);
		else if (strcmp(cmd, "empty") == 0) {
			int result = empty(stack);
			cout << result << "\n";
		}
		else if (strcmp(cmd, "top") == 0)
			cout << top(stack) <<"\n";
	}
}