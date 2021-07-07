#include <bits/stdc++.h>

using namespace std;


int base[101][101];
int visit[101][101];
int R[4] = { 1, -1, 0, 0 };
int C[4] = { 0, 0, 1, -1 };

int max_size;
int new_size;


void dfs(int n,int m,int y,int x)
{
	int next_y, next_x;
	if (visit[y][x]) return;
	visit[y][x] = 1;
	new_size++;
	for (int i = 0; i < 4; i++)
	{
		next_y = y + R[i];
		next_x = x + C[i];
		printf("연산전 %d: %d %d\n",i, y, x);
		printf("연산후 %d: %d %d\n", i, next_y, next_x);
		if (next_y < 1 || next_y > n || next_x <1 || next_x >m)
			continue;
		if (visit[next_y][next_x] == 1)
			continue;
		if (base[next_y][next_x] == 0)
			continue;

		dfs(n, m, next_y, next_x);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int n, m, k;
	int r, c;


	scanf_s("%d %d %d", &n, &m, &k);
	for (int i = 0; i < k; i++) {
		scanf_s("%d %d", &r, &c);
		base[r][c] = 1;
	}
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			if (base[i][j] == 1 && visit[i][j] == 0) {
				new_size = 0;
				dfs(n, m, i, j);
				if (new_size > max_size) {
					max_size = new_size;
				}
			}
		}
	}
	printf("%d\n", max_size);
}