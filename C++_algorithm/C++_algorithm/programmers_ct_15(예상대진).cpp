#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	int a, b;
	while (1)
	{
		if (a == b) return answer;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		answer++;
	}
	return 0;
}