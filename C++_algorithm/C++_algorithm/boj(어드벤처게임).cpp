#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define MAX 1005
#define INF 987654321
#define MOD 1000000
#pragma warning(disable:4996)
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

struct st {
	char type;
	int num;
}room[1005];
int n, b, c;
char a;
bool ans, tf[MAX];
vector<int> v[MAX];

void dfs(int in, int money)
{
	if (room[in].type == 'L'&&money < room[in].num)
		money = room[in].num;
	// 레프리콘인 경우
	if (room[in].type == 'T')
		if (money < room[in].num)
			return;
		else
			money -= room[in].num;
	// 트롤인 경우
	if (in == n)
	{
		ans = true;
		return;
	}
	// 도착지점을 통과한 경우

	tf[in] = true;
	for (int i = 0; i < v[in].size(); i++)
	{
		int next = v[in][i];
		if (tf[next] == false)
			dfs(next, money);
	}
	tf[in] = false;
}

int main() {

	scanf("%d", &n);
	while (n != 0)
	{
		for (int i = 0; i < MAX; i++)
			v[i].clear();
		ans = false;
		// 초기화

		for (int i = 1; i <= n; i++)
		{
			getchar();
			scanf("%c%d%d", &a, &b, &c);
			room[i] = { a,b };
			while (c != 0)
			{
				v[i].push_back(c);
				scanf("%d", &c);
			}
		}
		// 입력 다받고 dfs로 돌리기

		dfs(1, 0);
		if (ans)
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d", &n);
	}
	return 0;
}