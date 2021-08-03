#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(vector<vector<int> > land)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0, m = 0;

	for (int i = 1; i < land.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			m = 0;
			for (int k = 0; k < 4; k++)
			{
				if (j != k)
					m = max(m, land[i - 1][k]);
			}
			land[i][j] += m;
		}
	}

	for (int i = 0; i < 4; i++)
		answer = max(answer, land[land.size() - 1][i]);
	return answer;
}