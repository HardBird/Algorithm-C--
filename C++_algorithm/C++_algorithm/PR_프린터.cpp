#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	priority_queue<int> q;
	queue<pair<int,int>>qq; 

	for (int i = 0; i < priorities.size(); i++)
	{
		qq.push({i, priorities[i] });
		q.push(priorities[i]);
	}
	while (!qq.empty())
	{
		int temp1 = qq.front().first;
		int temp2 = qq.front().second;
		qq.pop();

		if (temp2 == q.top())
		{
			q.pop();
			answer++;
			if (location == temp1)break;
		}
		else
		{
			qq.push({ temp1,temp2 });
		}
	}
	return answer;
}