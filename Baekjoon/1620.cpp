#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
int N, M,i;

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	string name;
	string tmp;

	map<string, int> pokemon;
	map<string, int>::key_compare mycomp = pokemon.key_comp();
	map<string,int>::iterator iter = pokemon.begin();
	vector<string> index(N + 1);

	for (i = 1; i <= N; i++) {
		cin >> name;
		pokemon[name] = i;
		index[i] = name;
	}
	for (i = 0; i < M; i++) {
		cin >> tmp;
		if (tmp[0] >= 'A') {
			cout << pokemon.find(tmp)->second << "\n";
		}
		else {
			cout << index[stoi(tmp)]<<"\n";
		}
	}








}