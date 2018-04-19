#include<iostream>
#include<random>
#include<time.h>
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a;
	srand((intptr_t)&a);
	rand() % 2 ? (cout << "Korea") : (cout << "Yonsei");
}