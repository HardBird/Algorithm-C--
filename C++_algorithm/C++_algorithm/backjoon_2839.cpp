#include <bits/stdc++.h>

using namespace std;
int N;
int tot = 0;
int mod = 0;
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	cin >> N; 
	int M = N / 5;
	while (M>=0)
	{
		mod = 0;
		if (M>0)
		{
			mod = N - 5 * M;
		}
		else
		{
			mod = N;
			tot = tot + (mod / 3);
			mod = mod % 3;
		}

		if (mod == 0)
		{
			cout << tot;
			break;
		}

		M--;
	}
	if (mod != 0) cout << -1 << endl;



	return 0;
}