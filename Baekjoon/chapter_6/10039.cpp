#include<iostream>
using namespace std;
#define size 5
int main(void)
{
	int n[size] = {0,};
	int hap(0);
	for(int i =0;i<size; i++){
		cin >> n[i];
		if(n[i] <40)
			n[i] = 40;
		hap += n[i];
	}
	cout << hap/size;
}
