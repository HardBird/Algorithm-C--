#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {

	const char ENTER = 'E', LEAVE = 'L', CHANGE = 'C';
	map<string, string> id_map; //unordered_map�̳� map ���� ������ ���δ� �ؽ��� ����Ʈ�� ����� �����ε�, �����Ͱ� ������ unordered_map�� �� ���� �ӵ��� ����.
	string command, uid, nick;

	// ���� �Ǵ� ������ �� id_map�ʿ� <uid, nick> ����
	for (string line : record)
	{
		stringstream ss(line);
		ss >> command;

		if (command[0] == ENTER || command[0] == CHANGE)
		{
			ss >> uid;
			ss >> nick;

			id_map[uid] = nick;
		}
	}

	// ���� �Ǵ� ������ �� answer���Ϳ� nick + �޽��� ����
	vector<string> answer;
	for (string line : record)
	{
		stringstream ss(line);
		ss >> command;
		ss >> uid;

		if (command[0] == ENTER)
		{
			answer.push_back(id_map[uid] + "���� ���Խ��ϴ�.");
		}
		else if (command[0] == LEAVE)
		{
			answer.push_back(id_map[uid] + "���� �������ϴ�.");
		}
	}

	return answer;
}

