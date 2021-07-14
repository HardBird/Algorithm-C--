#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book)
{
	if (phone_book.size() <= 1)
		return true;

	sort(phone_book.begin(), phone_book.end());
	//문제에 핵심포인트.. 해당접두사를 정렬하여 가장짧은 접두사를 찾고 사이즈만큼계속해서 비교해주면된다.

	// 이전 전화번호의 접두어일 경우 false
	for (size_t nIndex = 1; nIndex < phone_book.size(); ++nIndex)
	{
		if (phone_book[nIndex].find(phone_book[nIndex - 1]) == 0)
			return false;
	}

	return true;
}

//if가 0이면 거짓 나머지는 참의 값 
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