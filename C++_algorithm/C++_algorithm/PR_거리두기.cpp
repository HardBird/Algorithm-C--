2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
#include <string>
#include <vector>
#include <queue>

using namespace std;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

bool BFS(int a, int b, vector<string> MAP)
{
	vector<vector<bool>> Visit(5, vector<bool>(5, false));
	queue<pair<pair<int, int>, int>> Q;
	Q.push(make_pair(make_pair(a, b), 0));
	Visit[a][b] = true;

	while (Q.empty() == 0)
	{
		int x = Q.front().first.first;
		int y = Q.front().first.second;
		int Cnt = Q.front().second;
		Q.pop();

		if (Cnt == 2) continue;

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5)
			{
				if (Visit[nx][ny] == false)
				{
					if (MAP[nx][ny] == 'O')
					{
						Visit[nx][ny] = true;
						Q.push(make_pair(make_pair(nx, ny), Cnt + 1));

					}
					else if (MAP[nx][ny] == 'P')
					{
						return false;
					}
				}

			}
		}
	}
	return true;
}

int Find_Answer(vector<string> MAP)
{
	for (int i = 0; i < MAP.size(); i++)
	{
		for (int j = 0; j < MAP[i].size(); j++)
		{
			if (MAP[i][j] == 'P')
			{
				if (BFS(i, j, MAP) == false)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

vector<int> Function(vector<vector<string>> MAP)
{
	vector<int> Result;
	for (int i = 0; i < MAP.size(); i++)
	{
		Result.push_back(Find_Answer(MAP[i]));
	}
	return Result;
}

vector<int> solution(vector<vector<string>> places)
{
	vector<int> answer;
	answer = Function(places);
	return answer;
}
