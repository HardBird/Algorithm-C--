#include <bits/stdc++.h>

using namespace std; 

int N, M,NN, K;
vector<int> temp[1001];
int cnt[1001] = { 0, };
void bfs() {
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (cnt[i] == 0)
			q.push(i);
	}
	while (!q.empty())
	{
		int start = q.front();
		q.pop();

		cout << start << " ";
		for (int i = 0; i < temp[start].size(); i++)
		{
			if (--cnt[temp[start][i]] == 0) {
				q.push(temp[start][i]);
			}
		}
	}
}


int main()
{

	int answer;
	cin >> N >> NN;
	for (int i = 0; i < NN; i++) {

		cin >> M >> K;
		temp[M].push_back(K);
		cnt[K]++;
	}

	bfs();
	return 0;
}