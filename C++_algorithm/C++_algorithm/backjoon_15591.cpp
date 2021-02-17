#include <bits/stdc++.h>

using namespace std;

vector <pair<int, int>> vec[5000];
bool visit[5000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> Q;

	for (int i = 0; i < N - 1; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vec[a].push_back({ b,c });
		vec[b].push_back({ a,c });
	}


	for (int i = 0; i < Q; i++)
	{
		int k, s;
		cin >> k >> s;


		bool visit[5001];
		memset(visit, 0, sizeof(visit));

		visit[s] = true;
		queue<int> que;
		que.push(s);

		int count = 0;
		while (!que.empty())
		{
			int cur = que.front();
			que.pop();

			for (int j = 0; j < vec[cur].size(); j++)
			{
				if (!visit[vec[cur][j].first])
				{
					if (vec[cur][j].second >= k)
					{
						count++;
						visit[vec[cur][j].first] = true;
						que.push({ vec[cur][j].first });
					}
				}
			}
		}
		cout << count << endl;
	}





	return 0;
}