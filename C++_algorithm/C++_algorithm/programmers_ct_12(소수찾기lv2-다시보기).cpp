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
STL과 완전탐색을 문제에 적용하지 못해서 풀지를 못하였다... 
해당 참고사이트가 너무 잘 설명해줘서 읽고나서 stl사용법을 알게되었다 
*/

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	return 0;
}