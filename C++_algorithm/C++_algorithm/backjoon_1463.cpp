#include <bits/stdc++.h>

using namespace std;
int N;
int temp[1001];
int cnt = 1;
int a, b, c;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	temp[0] = 0;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 1;
	cin >> N;
	for (int i = 2; i <= N; i++)
	{
		if (i % 3==0)
		{
			a = temp[i / 3] ;
		}
		else if(i % 2 == 0)
		{
			b = temp[i / 2] ;
		}
		else
		{
			c= temp[i - 1];
		}
		temp[i] = min((a, b), c) + 1;
	}
	cout << temp[N] << endl;
	return 0;
}