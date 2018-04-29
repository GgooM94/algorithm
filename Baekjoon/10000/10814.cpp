#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
struct People
{
	int year;
	std::string name;
};

bool comp(const People& A, const People& B) {
	return A.year < B.year;
}
int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<People> people;
	people.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> people[i].year >> people[i].name;
	}
	stable_sort(people.begin(), people.end(), comp);	//저장된 순서를 유지하면서 Sort하는 함수

	for (int i = 0; i < N; i++) {
		cout << people[i].year << " " << people[i].name << "\n";
	}
}