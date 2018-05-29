#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

/*
* Complete the gradingStudents function below.
*/
vector<int> gradingStudents(vector<int> grades) {
	vector<int>res(grades.size());
	int temp;
	for (int i = 0; i < grades.size(); i++) {
		temp = grades[i] / 5;
		temp = (temp + 1) * 5;
		if (temp >= 40 && temp - grades[i] < 3) {
			res[i] = temp;
		}
		else {
			res[i] = grades[i];
		}
	}
	return res;

}

int main()
{

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> grades(n);

	for (int grades_itr = 0; grades_itr < n; grades_itr++) {
		int grades_item;
		cin >> grades_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		grades[grades_itr] = grades_item;
	}

	vector<int> result = gradingStudents(grades);

	for (int result_itr = 0; result_itr < result.size(); result_itr++) {
		cout << result[result_itr];

		if (result_itr != result.size() - 1) {
			cout << "\n";
		}
	}

	cout << "\n";

	return 0;
}