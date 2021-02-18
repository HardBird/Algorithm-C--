#include <bits/stdc++.h>

//컴퓨터개념 상하좌우 

/*
우리가 생각하는 좌표개념으로 이해하지말자.
컴퓨터에서는 왼쪽상단에서부터 시작해서 (0,0)
오른쪽으로 이동하면 열만바뀐다. (0,1) (0,2)
아래쪽으로 내려가면 행만바뀐다. (1,0) (2,0)
*/


/*
좌표점을 할때는 y좌표부터 입력을하자. 구조상 위아래가 1순위이고 좌우가 2순위이기에 헷갈리수 있기 때문이다.
*/


//하루에 한번씩 백지상태에서 시작해서 코딩해보기 
//0215 시작 
//0216,0217,0218

/*
using namespace std; 
*/
vector<int> temp[8];
int IsVisit[8];
int N = 7;

void dfs(int start)
{

}

void bfs(int start)
{
	queue <int> q;
	q.push(start);
	IsVisit[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < temp[start].size(); i++)
		{
			int y = q[x][i];
			if (!IsVisit[y])
			{
				q.push(y);
				IsVisit[y] = true;
			}
		}
	}


}


using namespace std;

int answer[1001][1001];
int x = 0, y = 0;
int ck = 0; 
stack<int> area1;
stack<int> area2;
stack<int> area3;
stack<int> area4;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> answer[i][j];
		}
	}

	while (!ck)
	{
		for (int i = x; i <= x; i++)
		{
			for (int j = y + 1; j < M; j++)
			{
				area1.push(answer[i][j]);
				cout << "1사분면 값 " << answer[i][j] << endl;
			}
		}

		for (int i = x; i <= x; i++)
		{
			for (int j = y; j <= y; j++)
			{
				area2.push(answer[i][j]);
				cout << "2사분면 값 " << answer[i][j] << endl;
			}
		}
	
		for (int i = x + 1; i < M; i++)
		{
			for (int j = y ; j <= y; j++)
			{
				area3.push(answer[i][j]);
				cout << "3사분면 값 " << answer[i][j] << endl;
			}
		}

		for (int i = x + 1; i < M; i++)
		{
			for (int j = y + 1; j < M; j++)
			{
				area4.push(answer[i][j]);
				cout << "4사분면 값 " << answer[i][j] << endl;
			}
		}
		ck = true;
	}


	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << ' ' << answer[i][j];
		}
		cout << endl;
	}

	return 0;
}