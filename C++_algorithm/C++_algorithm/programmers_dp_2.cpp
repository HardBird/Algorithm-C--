#include<bits/stdc++.h>
using namespace std;

bool solution(string s)
{
	stack<int> st;
	int openCount = 0;  // '('의 개수
	int closeCount = 0; // ')'의 개수

	// s 문자열 순회
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			st.push(s[i]);
			openCount++;
		}

		if (s[i] == ')')
		{
			closeCount++;

			if (!st.empty())
				st.pop();
		}
	}

	// s 문자열 순회 끝
	if (st.empty() && openCount == closeCount && openCount > 0 && closeCount > 0)
		return true;
	else
		return false;
}