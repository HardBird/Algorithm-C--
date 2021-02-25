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
//0216,0217,0218,0219,0222,0223,0224,0225

/*
using namespace std; 
*/
vector<int> temp[8];
int IsVisit[8];
int N = 7;

void dfs(int start)
{
	//1. 방문체크 
	//2. 방문했다 
	//3. 사이즈만큼 for문
	//3-1. 인접노드 추출 
	//3-2. dfs돌려 ~(재귀)

}

void bfs(int start)
{
	//1. q를 생성하고, 해당 q에 시작점을 넣어주고 방문했다고 바꾸어준다. (시작점)
	//2. while문으로 q가 빌때까지 반복 
	//3. q의 시작값을 추출하고 q에서 제거 (FIFO 원리) 이 과정을 반복시작한다.
	//3-1 인접한 노드들의 크기만큼 for문을 돌림 (벡터의 크기가아닌 시작점에 사이즈를 구해서 인접한 값들을 찾음
	//3-2. 방문하지않았더라면 그 값을 기점으로 또 찾아나아가야하니 그 값을 큐에 넣어주고 방문 처리를 한다. (반복)
}


void dp(int start)
{
	//피보나치 수열의 진화버젼.
	//피보나치 수열은 N개의 높이를 가진 트리에 대해서 시간복잡도가 O(N^2) 이다.
	//그렇기에 피보나치 수열 50개의 높이를 구하기만해도 약 15000000000000000초가 걸린다.
	//그렇다면 이를 효율적으로 연산하는 법은 무엇일까? 바로 데이터의 스택구조를 이용하는것이다.
	//컴파일을 할때에 계산을 한것을 배열에 저장해둔다면, 값을 새로연산할 필요없이 저장되어있는 배열의
	//값을 사용하여서, 시간을 단축시킬수있으며, 값을 저장하는 식으로 피보나치 수열을 구현한다면
	//높이만큼에 시간복잡도 O(n)을 가질 수 있다.
}

using namespace std;

//절대축 x,y 영역 나눠서 배열에 넣어보기 
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