#include<iostream>
#include<vector>
#include<algorithm>
struct student
{
	int stuCountry;
	int stuNum;
	int stuScore;
};
bool scoreSort(const student& stu1, const student& stu2) {
	return stu1.stuScore > stu2.stuScore;
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N,i;
	student stu[100];
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> stu[i].stuCountry >> stu[i].stuNum >> stu[i].stuScore;
	}

	sort(stu, stu + N,scoreSort);
	
	for (i = 0; i < 3; i++) {
		if (i == 2 && stu[0].stuCountry == stu[1].stuCountry && stu[1].stuCountry == stu[2].stuCountry)
			cout << stu[3].stuCountry << " " << stu[3].stuNum << endl;
		else
		{
			cout << stu[i].stuCountry << " " << stu[i].stuNum << endl;
		}
	}
}