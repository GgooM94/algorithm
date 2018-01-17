#include<iostream>
#include<string>
using namespace std;
int countNum(int num){
	if(num<=0)
		return 0;
	if(num ==4||num==6||num==9||num==11){
		return 30+countNum(num-1);
	}
	else if(num==2){
		return 28 +countNum(num-1);
	}
	else{
		return 31+countNum(num1);
	}

}
int main(){
	string week[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int month,day;
	cin >> month >> day;
	day = day + countNum(month-1);
	cout << week[day%7];
}

