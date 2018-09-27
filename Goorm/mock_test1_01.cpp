#include <iostream>
#include <string>
#include<cctype>
using namespace std;

string get_formatted_name(string &first_name, string& last_name)
{
	string formatted_name;
	first_name[0] = toupper(first_name[0]);
	last_name[0] = toupper(last_name[0]);

	for (int i = 1; i < first_name.size(); i++) {
		first_name[i] = tolower(first_name[i]);
	}
	for (int i = 1; i < last_name.size(); i++) {
		last_name[i] = tolower(last_name[i]);
	}

	formatted_name = (first_name + " " + last_name);


	return formatted_name;
}

int main() {
	ios_base::sync_with_stdio(false);

	//테스트케이스의 수를 입력받는다 
	int caseNum;
	cin >> caseNum;

	//각 테스트케이스에 대하여 데이터를 입력받고 정답을 차례로 출력한다
	for (int caseIndex = 1; caseIndex <= caseNum; caseIndex++)
	{
		string first_name;
		string last_name;

		//이름과 성을 차례로 입력받는다
		cin >> first_name >> last_name;

		//주어진 함수로 포매팅된 이름을 얻는다 
		string answer = get_formatted_name(first_name, last_name);

		//정답을 출력한다
		cout << "Case #" << caseIndex << "\n";
		cout << answer << "\n";
	}
	return 0;
}
