#include <string>
#include <iostream>
using namespace std;
bool solution(string s)
{
	int p = 0, y = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (tolower(s[i]) == 'p') p++;
		else if (tolower(s[i]) == 'y') y++;
	}
	return (p - y == 0) ? true : false;
}