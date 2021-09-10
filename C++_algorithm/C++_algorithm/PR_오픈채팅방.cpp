#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;

	stringstream ss;
	string id, nickname, action;
	map<string, string> arr;

	for (int i = 0; i < record.size(); i++)
	{
		ss.str(record[i]);
		//cout << "record[i]" << record[i] << endl;
		ss >> action;
		if (action == "Enter" || action == "Change")
		{
			ss >> id;
			ss >> nickname;
			arr[id] = nickname;
			//cout <<"action:"<<action <<"id: " << id << "  nickname: " << nickname << endl;
		}
		ss.clear();
	}
	ss.clear();
	for (int i = 0; i < record.size(); i++)
	{
		ss.str(record[i]);
		ss >> action;
		ss >> id;
		ss >> nickname;
		if (action == "Enter")
		{
			answer.push_back(arr[id]+"님이 들어왔습니다.");
		}
		else if (action == "Leave")
		{
			answer.push_back(arr[id] + "님이 나갔습니다.");
		}
		ss.clear();
	}

	return answer;
}