#include <bits/stdc++.h>

using namespace std;

bool IsPrime(int N)
{
	if (N == 0 || N == 1) return false;

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0) return false;
	}
	return true;
}



//https://henrynoh.tistory.com/44
//https://johnyejin.tistory.com/34
/*
STL�� ����Ž���� ������ �������� ���ؼ� Ǯ���� ���Ͽ���... 
�ش� �������Ʈ�� �ʹ� �� �������༭ �а��� stl������ �˰ԵǾ��� 
*/

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	return 0;
}