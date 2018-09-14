#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void) {
	int cacheSize, time(0);
	string input = "start";

	vector<string>cache;
	cin >> cacheSize;

	while (true)
	{
		bool isCacheHit = false;
		cin >> input;

		if (cache.size() < cacheSize) {
			for (int i = 0; i < cache.size(); i++) {
				if (cache[i] == input) {
					isCacheHit = true;
					break;
				}
			}
			if (isCacheHit) {
				time++;
			}
			else {
				cache.push_back(input);
				time += 5;
			}
		}
		else {
			for (int i = 0; i < cache.size(); i++) {
				if (cache[i] == input) {
					isCacheHit = true;
					break;
				}
			}
			isCacheHit ? time += 1 : time += 5;

			if (cacheSize != 0) {
				cache.erase(cache.begin(), cache.begin() + 1);
				cache.push_back(input);
			}

		}
		for (int i = 0; i < cache.size(); i++) {
			cout << cache[i] << " ";
		}
		cout << endl;
		cout << "time : " << time << endl;
	}
	cout << time;
}

/*
3
Jeju Pangyo Seoul NewYork LA Jeju Pangyo Seoul NewYork LA

3
Jeju Pangyo Seoul Jeju Pangyo Seoul Jeju Pangyo Seoul

2
Jeju Pangyo Seoul NewYork LA SanFrancisco Seoul Rome Paris Jeju NewYork Rome

5
Jeju Pangyo Seoul NewYork LA SanFrancisco Seoul Rome Paris Jeju NewYork Rome
*/