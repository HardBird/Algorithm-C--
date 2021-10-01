
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string change(int num, int n)
{
	string temp;

	if (num == 0)
	{
		return "0";
	}

	while (num > 0)
	{
		if (num % n < 10)
		{
			temp = to_string(num % n) + temp;
		}
		else
		{
			if (num % n == 10)
			{
				temp = "A" + temp;
			}
			else if (num % n == 11)
			{
				temp = "B" + temp;
			}
			else if (num % n == 12)
			{
				temp = "C" + temp;
			}
			else if (num % n == 13)
			{
				temp = "D" + temp;
			}
			else if (num % n == 14)
			{
				temp = "E" + temp;
			}
			else if (num % n == 15)
			{
				temp = "F" + temp;
			}
		}

		num /= n;
	}

	return temp;
}

string solution(int n, int t, int m, int p)
{
	string answer = "";

	string num;
	int cnt = 0;

	while (num.size() < t*m)
	{
		num = num + change(cnt, n);
		cnt++;
	}

	for (int i = p - 1; i < num.size(); i += m)
	{
		answer += num[i];

		if (answer.size() == t)
		{
			return answer;
		}
	}
}
