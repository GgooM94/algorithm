#include<iostream>
using namespace std;
int main(void)
{
	int N;
	cin >> N;
	for(int i = N; i >0; N--){
		for(int j = 1; j <=N;j++){
			cout << "*";
		}
		cout << "\n";
	}

}
