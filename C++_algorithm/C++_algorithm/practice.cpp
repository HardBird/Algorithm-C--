#include <bits/stdc++.h>

//��ǻ�Ͱ��� �����¿� 

/*
�츮�� �����ϴ� ��ǥ�������� ������������.
��ǻ�Ϳ����� ���ʻ�ܿ������� �����ؼ� (0,0)
���������� �̵��ϸ� �����ٲ��. (0,1) (0,2)
�Ʒ������� �������� �ุ�ٲ��. (1,0) (2,0)
*/


/*
��ǥ���� �Ҷ��� y��ǥ���� �Է�������. ������ ���Ʒ��� 1�����̰� �¿찡 2�����̱⿡ �򰥸��� �ֱ� �����̴�.
*/


//�Ϸ翡 �ѹ��� �������¿��� �����ؼ� �ڵ��غ��� 
//0215 ���� 
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
				cout << "1��и� �� " << answer[i][j] << endl;
			}
		}

		for (int i = x; i <= x; i++)
		{
			for (int j = y; j <= y; j++)
			{
				area2.push(answer[i][j]);
				cout << "2��и� �� " << answer[i][j] << endl;
			}
		}
	
		for (int i = x + 1; i < M; i++)
		{
			for (int j = y ; j <= y; j++)
			{
				area3.push(answer[i][j]);
				cout << "3��и� �� " << answer[i][j] << endl;
			}
		}

		for (int i = x + 1; i < M; i++)
		{
			for (int j = y + 1; j < M; j++)
			{
				area4.push(answer[i][j]);
				cout << "4��и� �� " << answer[i][j] << endl;
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