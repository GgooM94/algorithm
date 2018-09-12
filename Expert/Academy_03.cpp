#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int isRightcode(vector<int>arr)
{
	int oddSum(0), evenSum(0);

	for (int i = 0; i < arr.size(); i++) {
		if (i & 1)
			evenSum += arr[i];
		else
			oddSum += arr[i];
	}
	if ((oddSum * 3 + evenSum) % 10)
		return 0;
	else
		return oddSum + evenSum;
}

int main()
{
	string strCase[] = { "0001101", "0011001", "0010011", "0111101", "0100011", "0110001", "0101111", "0111011", "0110111", "0001011" };

	int testCase, N, M;
	vector<string>input;

	cin >> testCase;

	for (int i = 1; i <= testCase; i++)
	{
		vector<int>code;
		string temp = "";
		cin >> N >> M;

		input.clear();
		input.resize(N);

		string userInput;
		for (int j = 0; j < N; j++)
		{
			cin >> userInput;
			input[j] = userInput;
		}

		int beginIndex, endIndex;

		for (int j = 0; j < N; j++) {
			bool isInCode = false;
			for (int q = input[j].size() - 1; q >= 0; q--) {
				if (input[j][q] == '1')
				{
					isInCode = true;
					endIndex = q;
					beginIndex = endIndex - 55;
					break;
				}
			}
			if (isInCode)
			{
				for (int k = beginIndex; k < endIndex; k += 7)
				{
					string strTemp = input[j].substr(k, 7);

					for (int t = 0; t < sizeof(strCase) / sizeof(string); t++)
					{
						if (strCase[t] == strTemp)
						{
							code.push_back(t);
						}
					}
				}
				break;
			}
		}
		cout << '#' << i << ' ' << isRightcode(code) << '\n';
	}
}