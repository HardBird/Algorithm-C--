#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
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