#include<iostream>
#include<vector>

struct Player {
	int HP;
	int MP;
	int atk;
	int def;
};

struct Items
{
	int HP;
	int MP;
	int atk;
	int def;
};
int calc(const Player& p, const Items& i) {
	int sum(0);
	(p.HP + i.HP) > 1 ? sum += (p.HP + i.HP) : sum += 1;
	(p.MP + i.MP) > 1 ? sum += 5 * (p.MP + i.MP) : sum += 5;
	(p.atk + i.atk) > 0 ? sum += 2 * (p.atk + i.atk) : 0;
	sum += 2 * (p.def + i.def);
	return sum;
}

int main(void) {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	Player player;
	Items item;
	while (N--)
	{
		cin >> player.HP >> player.MP >> player.atk >> player.def;
		cin >> item.HP >> item.MP >> item.atk >> item.def;
		cout << calc(player, item) << '\n';
	}
}