#include <iostream>
#include <vector>
using namespace std;

int d[55][55];

void floyd(int N)
{
	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (d[i][k] + d[k][j] < d[i][j])
				{
					if (i == j)
					{
						continue;
					}

					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}

}

int solution(int N, vector<vector<int>> road, int K)
{
	int answer = 0;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
			{
				d[i][j] = 0;
			}
			else
			{
				d[i][j] = 99999999;
			}
		}
	}

	for (int i = 0; i < road.size(); i++)
	{
		// 전에 나온 도로 -> 최소면 갱신
		if (d[road[i][0]][road[i][1]] != 99999999)
		{
			if (road[i][2] < d[road[i][0]][road[i][1]])
			{
				d[road[i][0]][road[i][1]] = road[i][2];
				d[road[i][1]][road[i][0]] = road[i][2];
			}
		}
		// 처음 나온 도로 -> 바로 갱신
		else
		{
			d[road[i][0]][road[i][1]] = road[i][2];
			d[road[i][1]][road[i][0]] = road[i][2];
		}
	}

	floyd(N);

	for (int i = 1; i <= N; i++)
	{
		if (d[1][i] <= K)
		{
			answer++;
		}
	}

	return answer;
}
