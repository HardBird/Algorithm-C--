#include <bits/stdc++.h>

using namespace std;

int N, temp[10001];

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	temp[0] = 0;
	temp[1] = 1;
	temp[2] = 2;
	temp[3] = 4; 
 	cin >> N;
	for (int i = 4; i <= N; i++) //범위 확시맇 알자 
	{
		temp[i] = temp[i - 1] + temp[i - 2] + temp[i - 3];
	}
	cout << temp[N] << endl;
	return 0;
}