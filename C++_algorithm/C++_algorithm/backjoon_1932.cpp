#include <bits/stdc++.h>

using namespace std; 
int N;
int tot;
int dp[1001][1001];

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++) for (int j=0;j<=i;j++)cin >> dp[i][j];

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				dp[i][j] = dp[i - 1][0] + dp[i][j];
				cout << dp[i][j] << "좌변 ";
			}
			else if (j == i)
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
				cout << dp[i][j] << "우변 " ;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
				cout << dp[i][j] << "가운데 ";
			}
			tot = max(tot,dp[i][j]);
			cout << endl;
		}
	}

	cout << tot;


	return 0;
}