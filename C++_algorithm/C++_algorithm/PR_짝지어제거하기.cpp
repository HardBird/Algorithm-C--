#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
	int size = s.length();
	stack<char> ch;

	for (int i = 0; i < size; i++)
	{
		if (ch.empty())
		{
			ch.push(s[i]);
		}
		else
		{
			if (ch.top() == s[i])
				ch.pop();
			else
				ch.push(s[i]);
		}
	}

	if (ch.empty() == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}