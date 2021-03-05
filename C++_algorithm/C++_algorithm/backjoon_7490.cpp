#include <bits/stdc++.h>

using namespace std;
int M;
int N;

int solve(int sum, int sign, int num, int n, string str)
{
	if (n == N)
	{
		sum = sum + (num*sign);
		if (sum == 0)
		{
			cout << str;
		}
	}
	else
	{
		solve(sum, sign, num * 10 + (n + 1), n + 1, str + ' ' + char(n + 1 + '0'));
		solve(sum + (sign*num), 1, n + 1, n + 1, str + '+' + char(n + 1 + '0'));
		solve(sum + (sign*num), -1, n + 1, n + 1, str + '-' + char(n + 1 + '0'));
	}
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> N;
		solve(0, 1, 1, 1, "1");
	}
	return 0;
}