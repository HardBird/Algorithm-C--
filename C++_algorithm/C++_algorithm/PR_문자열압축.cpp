#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int Min(int A, int B) { return A < B ? A : B; }

int solution(string s) {
	int answer = s.length();
	for (int i = 1; i <= s.length() / 2 ; i++)
	{
		string Result = "";
		string temp = s.substr(0, i);
		int cnt = 1;
		int j;
		for ( j = i; j <= s.length(); j=j+i)
		{
			if (temp == s.substr(j, i))cnt++;
			else
			{
				if (cnt == 1)Result += temp;
				else
				{
					Result += to_string(cnt);
					Result += temp;
				}
				temp = s.substr(j, i);
				cnt = 1;
			}
		}
		if (j > s.length())
		{
			if (cnt == 1) Result += temp;
			else
			{
				Result += to_string(cnt);
				Result += temp;
			}
		}
		answer = Min(answer, Result.length());

	}
	return answer;
}