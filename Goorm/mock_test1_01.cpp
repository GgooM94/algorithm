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

	//�׽�Ʈ���̽��� ���� �Է¹޴´� 
	int caseNum;
	cin >> caseNum;

	//�� �׽�Ʈ���̽��� ���Ͽ� �����͸� �Է¹ް� ������ ���ʷ� ����Ѵ�
	for (int caseIndex = 1; caseIndex <= caseNum; caseIndex++)
	{
		string first_name;
		string last_name;

		//�̸��� ���� ���ʷ� �Է¹޴´�
		cin >> first_name >> last_name;

		//�־��� �Լ��� �����õ� �̸��� ��´� 
		string answer = get_formatted_name(first_name, last_name);

		//������ ����Ѵ�
		cout << "Case #" << caseIndex << "\n";
		cout << answer << "\n";
	}
	return 0;
}
