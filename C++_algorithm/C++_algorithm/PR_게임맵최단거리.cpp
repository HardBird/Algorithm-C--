#include <vector>
#include <queue>
using namespace std;

bool visit[101][101] = { false, };
//╩С го аб ©Л
int row[4] = { 0, 0, -1, 1 };
int col[4] = { 1, -1, 0, 0 };

int solution(vector<vector<int> > maps)
{
	int width = maps.size(); //n
	int height = maps[0].size(); //m

	queue<pair<pair<int, int>, int>> q;
	q.push({ {0, 0}, 1 });
	visit[0][0] = true;

	while (!q.empty()) {
		int cur_x = q.front().first.first;
		int cur_y = q.front().first.second;
		int cur_dist = q.front().second;
		q.pop();

		if (cur_x == width - 1 && cur_y == height - 1) return cur_dist;

		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + row[i];
			int next_y = cur_y + col[i];
			int next_dist = cur_dist + 1;

			if (next_x < 0 || next_x >= width || next_y < 0 || next_y >= height) continue;

			if (!visit[next_x][next_y] && maps[next_x][next_y] == 1) {
				q.push({ {next_x, next_y}, next_dist });
				visit[next_x][next_y] = true;
			}
		}
	}

	return -1;  
}