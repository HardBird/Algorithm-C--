#include <bits/stdc++.h>

//dfs,bfs 변태가 되어가는중...

using namespace std;

vector<int> answer{ 0, 0 };
vector<vector<int>> board;

void check(int x, int y, int size, int first)
{
	int half = size / 2;
	bool keep = true;

	if (size < 2)
	{
		if (first == 1)
			answer[1]++;
		else
			answer[0]++;
		return;
	}

	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (board[i][j] != first)
			{
				keep = false;
				break;
			}
		}
		if (!keep)
			break;
	}

	if (keep)
	{
		if (first == 1)
			answer[1]++;
		else
			answer[0]++;
		return;
	}
	check(x, y, half, board[x][y]);
	check(x + half, y, half, board[x + half][y]);
	check(x, y + half, half, board[x][y + half]);
	check(x + half, y + half, half, board[x + half][y + half]);
	return;
}

vector<int> solution(vector<vector<int>> arr) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int size = arr.size();
	board = arr;
	check(0, 0, size, arr[0][0]);
	return answer;
}