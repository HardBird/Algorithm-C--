#include <bits/stdc++.h>

using namespace std;

int N;
int temp[10001][10001];
int sum = 0;
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1;i < 10; i++)
	{
		temp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0) temp[i][j] = temp[i - 1][j + 1];
			else if (j == 9) temp[i][j] = temp[i - 1][j - 1];
			else
			{
				temp[i][j] = temp[i - 1][j - 1] + temp[i - 1][j + 1];
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sum = sum + temp[n][i];
	}

	cout << sum << endl;

	return 0;
}