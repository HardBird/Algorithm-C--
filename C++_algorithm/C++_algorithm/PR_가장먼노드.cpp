#include <bits/stdc++.h>

using namespace std;

vector<int> v[20001];
int check[20001], record[20001], mn=0;
queue<int> q;

void BFS(int start)
{
	check[start] = true;
	q.push(start);
	
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		
		for (int i = 0; i < v[x].size(); i++)
		{

			int temp = v[x][i];
			if (!check[temp])
			{
				q.push(temp);
				check[temp] = true;
				record[temp] = record[x] + 1;
				mn = max(mn, record[temp]);
			}
			else continue;
		}
	}
}


int solution(int n, vector<vector<int>> edge) {
	int answer = 0;
	for (int i = 0; i < edge.size(); i++) {
		int from = edge[i][0];
		int to = edge[i][1];
		v[from].push_back(to);
		v[to].push_back(from);
	}

	BFS(1);

	for (int i = 1; i <= n; i++) {
		if (record[i] == mn)
			answer++;
	}


	return answer;
}