#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book)
{
	if (phone_book.size() <= 1)
		return true;

	sort(phone_book.begin(), phone_book.end());
	//������ �ٽ�����Ʈ.. �ش����λ縦 �����Ͽ� ����ª�� ���λ縦 ã�� �����ŭ����ؼ� �����ָ�ȴ�.

	// ���� ��ȭ��ȣ�� ���ξ��� ��� false
	for (size_t nIndex = 1; nIndex < phone_book.size(); ++nIndex)
	{
		if (phone_book[nIndex].find(phone_book[nIndex - 1]) == 0)
			return false;
	}

	return true;
}

//if�� 0�̸� ���� �������� ���� �� 
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	if (solution({ "119", "97674223", "1195524421", })) cout << "true" << endl; else cout << "false" << endl;
	if (solution({ "123","456","789" })) cout << "true" << endl; else cout << "false" << endl;
	if (solution({ "12","123","1235","567","88" })) cout << "true" << endl; else cout << "false" << endl;
	if (solution({ "45", "123","789", "125234" })) cout << "true" << endl; else cout << "false" << endl;
	if (solution({ "45", "456" })) cout << "true" << endl; else cout << "false" << endl;

	return 0;
}