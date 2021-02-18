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
	/* �丶�� ����(�׷���)�� ũ�� �Է� (����/����)*/
	cin >> M >> N;

	/* �׷��� ���� �Է�*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp[i][j];
			if (temp[i][j] == 1) { // �����丶��(1) -> ť
				q.push({ i, j });
			}
		}
	}

	/* �׷����� BFS�� ���� Ž�� */
	bfs();

	/* ��¥ ��� �� ���  */
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// �������� �丶��(0)�� ������ ���
			if (temp[i][j] == 0) {
				cout << "-1" << endl;
				return 0;
			}
			// �丶��� �� �;��µ�, �󸶸��� �;�����?
			if (result < temp[i][j]) {
				result = temp[i][j];
			}
		}
	}
	printf("%d\n", result - 1);

	return 0;
}