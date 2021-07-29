#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
//답을 못찾아서 검색해서 답을 본 문제이다.
//이런 패턴문제에서는 나누어 떨어지지 않는 몫에 대해서 힌트를찾으면된다. 여기에서는 3이 힌트이기에 3에대한 결과값을 기준으로 패턴을 찾아주면 된다.
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