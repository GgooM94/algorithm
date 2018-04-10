#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int arr[25][25];
std::vector<int> res;
int N,cnt(0);
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};
void search(const int& x, const int& y) {
	if (x <0 || y <0 || x > N - 1 || y>N - 1)
		return;
	if (arr[y][x] == 0 || arr[y][x] == 2)
		return;

	arr[y][x] = 2;
	cnt++;

	search(x + dx[0], y + dy[0]);
	search(x + dx[1], y + dy[1]);
	search(x + dx[2], y + dy[2]);
	search(x + dx[3], y + dy[3]);
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int column, row;
	string str;
	cin >> N;

	for (column = 0; column < N; column++) {
		cin >> str;
		for (row = 0; row < N; row++) {
			arr[column][row] = stoi(str.substr(row, 1));
		}
	}

	for (column = 0; column < N; column++) {
		for (row = 0; row < N; row++) {
			if (arr[column][row] == 1) {
				cnt = 0;
				search(row, column);
				res.push_back(cnt);
			}
		}
	}
	cout << res.size() << "\n";
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << "\n";

}