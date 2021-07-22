#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {

	const char ENTER = 'E', LEAVE = 'L', CHANGE = 'C';
	map<string, string> id_map; //unordered_map이나 map 같은 원리로 쓰인다 해쉬와 이진트리 방식의 차이인데, 데이터가 적으면 unordered_map이 더 빠른 속도를 낸다.
	string command, uid, nick;

	// 입장 또는 변경일 때 id_map맵에 <uid, nick> 저장
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

	// 입장 또는 퇴장일 때 answer벡터에 nick + 메시지 저장
	vector<string> answer;
	for (string line : record)
	{
		stringstream ss(line);
		ss >> command;
		ss >> uid;

		if (command[0] == ENTER)
		{
			answer.push_back(id_map[uid] + "님이 들어왔습니다.");
		}
		else if (command[0] == LEAVE)
		{
			answer.push_back(id_map[uid] + "님이 나갔습니다.");
		}
	}

	return answer;
}

