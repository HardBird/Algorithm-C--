#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(vector<vector<int>> board)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int answer = board[0][0];
	int r = board.size();
	int c = board[0].size();

	for (int i = 1; i < r; i++)
	{
		for (int j = 1; j < c; j++)
		{
			if (board[i][j] == 1) {
				board[i][j] = 1 + min({ board[i - 1][j - 1],board[i - 1][j],board[i][j - 1] });
				answer = max(answer, board[i][j]);
			}
		}
	}

	return answer * answer;
}