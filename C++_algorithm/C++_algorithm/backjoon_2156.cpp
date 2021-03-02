#include <bits/stdc++.h>

using namespace std;
int N;
int Arr[10001];
int DP[10001];

int Bigger(int A, int B) { if (A > B) return A; return B; }

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}

	DP[0] = Arr[0] = 0;
	DP[1] = Arr[1];
	DP[2] = Arr[1] + Arr[2];
	// 3�� ���� ���� �� ����.
	// 1. ������ ���� �������� 3��° �տ� ���� ���ð�, 2��° �տ� ���� �ǳʶٰ� 1��° �տ� �� + �������� 
	// 2. ������ ���� �������� 2��° �տ� ���� ���ð� + ������ ��
	// 3. ������ ���� ������ �ʰ�, 1��° �տ� ���� �ִ�
	for (int i = 3; i <= N; i++)
	{
		DP[i] = Bigger(DP[i - 3] + Arr[i - 1] + Arr[i], Bigger(DP[i - 2] + Arr[i], DP[i - 1]));
	}

	cout << DP[N] << endl;

	return 0;
}