#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
string solution(string s) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string answer = "";
	static const size_t TWO = 2;
	const size_t length = s.length();

	if (length % TWO == 0)
	{
		//짝수
		answer += s[length / 2 - 1];
		answer += s[length / 2];
	}
	else
	{
		//홀수
		answer += s[length / 2];
	}
	return answer;

}