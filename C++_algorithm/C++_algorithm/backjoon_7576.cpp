#include <bits/stdc++.h>

using namespace std; 
struct tomato {
	int x, y;
};

queue<tomato> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0 , -1 };

int n, m, result = 0;
int temp[1001][1001];

bool check(int ny, int nx) {
	return (0 <= nx && 0 <= ny && nx < m && ny < n);
}

void bfs()
{
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		q.pop;
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (check(ny, nx) == 1 && temp[ny][nx] == 0) {
				temp[ny][nx] = temp[y][x] + 1;
				q.push({ ny, nx });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	/* 토마토 농장(그래프)의 크기 입력 (가로/세로)*/
	cin >> M >> N;

	/* 그래프 정보 입력*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp[i][j];
			if (temp[i][j] == 1) { // 익은토마토(1) -> 큐
				q.push({ i, j });
			}
		}
	}

	/* 그래프를 BFS를 통해 탐색 */
	bfs();

	/* 날짜 계산 및 출력  */
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 익지않은 토마토(0)가 존재할 경우
			if (temp[i][j] == 0) {
				cout << "-1" << endl;
				return 0;
			}
			// 토마토는 다 익었는데, 얼마만에 익었는지?
			if (result < temp[i][j]) {
				result = temp[i][j];
			}
		}
	}
	printf("%d\n", result - 1);

	return 0;
}