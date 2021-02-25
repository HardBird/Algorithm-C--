#include <bits/stdc++.h>

using namespace std;
int N;
int temp[10001];

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> N;
	temp[0] = 1, temp[1] = 2;
	for (int i = 2; i < N; i++)
	{
		temp[i] = (temp[i - 1] + temp[i - 2]) % 1000000007;
	}
	cout << temp[N - 1];
	return 0;
}