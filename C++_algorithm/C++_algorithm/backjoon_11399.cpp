#include <bits/stdc++.h>

using namespace std;

int N;
int temp[1001];

void dp()
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += temp[j];
		}
	}
	cout << sum << endl;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp[i];
	}

	sort(temp, temp + N); // �迭�� �������� ũ�⸸ŭ �����ָ� ���۰� ���� ���� �� �ִ�.
	dp();
	return 0;
}