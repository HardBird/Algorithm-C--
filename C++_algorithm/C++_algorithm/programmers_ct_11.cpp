#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(int n)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0, start = 1;

	while (start <= n)
	{
		int tmp = 0;

		for (int i = start; tmp <= n; i++)
		{
			if (tmp == n)
				answer++;
			tmp += i;
		}
		start++;
	}
	return answer;
}