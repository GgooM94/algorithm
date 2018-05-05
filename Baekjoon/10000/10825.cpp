#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

struct student
{
	string name;
	int kor;
	int eng;
	int mat;
};

bool comp(const student &a, const student& b) {
	if (a.kor == b.kor) {
		if (a.eng != b.eng) {
			return a.eng < b.eng;
		}
		else {
			if (a.mat != b.mat) {
				return a.mat > b.mat;
			}
			else {
				return a.name < b.name;
			}
		}
	}
	return a.kor > b.kor;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<student> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].mat;
	}
	sort(arr.begin(), arr.end(), comp);

	for (int i = 0; i < N; i++) {
		cout << arr[i].name << "\n";
	}
}