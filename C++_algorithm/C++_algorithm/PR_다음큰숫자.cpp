#include <string>
#include <vector>
using namespace std;

int count(int n)
{
	int cnt = 0;
	for (int i = 0; n > 0; i++)
	{
		if (n % 2 == 1)
		{
			cnt++;
		}
		n /= 2;
	}
	return cnt;
}

int solution(int n)
{
	int cmp = count(n);
	while (1)
	{
		n++;
		if (count(n) == cmp)
		{
			break;
		}
	}

	return n;
}