#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
//���� ��ã�Ƽ� �˻��ؼ� ���� �� �����̴�.
//�̷� ���Ϲ��������� ������ �������� �ʴ� �� ���ؼ� ��Ʈ��ã����ȴ�. ���⿡���� 3�� ��Ʈ�̱⿡ 3������ ������� �������� ������ ã���ָ� �ȴ�.
string main(int n)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string answer = "";
	int num[3] = { 4,1,2 };

	while (n > 0)
	{
		int rem = n % 3;
		n /= 3;

		if (rem == 0)
			n -= 1;

		answer = to_string(num[rem]) + answer;
	}
	return answer;
}