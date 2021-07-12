#include <string>
#include <vector>
#include <queue>
using namespace std;

int xmoving[4] = { 0,1,0,-1 };
int ymoving[4] = { 1,0,-1,0 };

bool BFS(int seq, int x, int y, vector<vector<string>> places) {
	int chk[5][5] = { 0 };
	queue<pair<int, int>> q;

	chk[x][y] = 1;
	q.push(make_pair(x, y));

	int now_x, now_y, tx, ty, i;

	while (!q.empty()) {
		now_x = q.front().first;
		now_y = q.front().second;
		q.pop();

		if (chk[now_x][now_y] >= 3)
			break;

		for (i = 0; i < 4; i++) {
			tx = now_x + xmoving[i];
			ty = now_y + ymoving[i];
			if (tx < 0 || ty < 0 || tx >= 5 || ty >= 5 || chk[tx][ty] || places[seq][tx][ty] == 'X')
				continue;

			if (places[seq][tx][ty] == 'P')
				return false;

			chk[tx][ty] = chk[now_x][now_y] + 1;
			q.push(make_pair(tx, ty));
		}
	}

	return true;
}

int is_okay(int seq, vector<vector<string>> places) {
	int x, y;

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			if (places[seq][x][y] != 'P')
				continue;

			if (!BFS(seq, x, y, places))
				return 0;
		}
	}

	return 1;
}

vector<int> solution(vector<vector<string>> places) {
	vector<int> answer;

	for (int z = 0; z < 5; z++)
		answer.push_back(is_okay(z, places));

	return answer;
}