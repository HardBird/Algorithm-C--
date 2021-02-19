#include <bits/stdc++.h>

using namespace std;

int N;

void hamsu(int N,int start, int temp,int end) {
	if (N == 1)
	{
		cout << N << ": " << start << " " << end << endl;
	}
	else
	{
		hamsu(N - 1, start, end, temp);
		cout << N << ": " << start << " " << end << endl;
		hamsu(N - 1, temp, start, end);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> N;
	hamsu(N, 1, 2, 3);

	return 0;
}