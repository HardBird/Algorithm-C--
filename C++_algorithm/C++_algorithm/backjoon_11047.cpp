#include <bits/stdc++.h>

using namespace std;


int N, M;
int cnt1 = 0, cnt2 = 0 , cnt3 = 0;
bool check_count = true;
//cnt1 단위금액횟수 cnt2 환전한횟수
//cnt3 다른 문제, 환전 해줄수 있는 동전 종류 
int temp[1001];

bool compare(int a, int b)
{
	return a > b;
}


void dp()
{
	while (M != 0)
	{
		if (M/temp[cnt1]>0)
		{
			if (check_count)
			{
				cnt3++;
				check_count = false;
			}
			//cout << "환전단위" << temp[cnt1] << endl;
			cnt2 = cnt2 + (M / temp[cnt1]);
			M = M % temp[cnt1];
		}
		else
		{
			cnt1++;
			check_count = true;
		}
	}
	cout << "11047문제답"<<cnt2 << endl;
	cout << "5585문제답"<<cnt3 << endl;
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> temp[i];
	}
	sort(temp, temp + N,compare);
	dp();
	return 0;
}