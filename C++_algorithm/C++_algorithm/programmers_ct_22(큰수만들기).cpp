#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
string main(string number,int k)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string answer = "";
	int n = number.size();

	int start = 0;
	int end = k;

	int max = 0;
	string max_text = "";
	int lastMaxIndex = 0;

	for (int i = 0; i < n - k; i++)
	{
		for (int j = start; j <= end; j++)
		{
			if (max < number[j])
			{
				max = number[j];
				max_text = number[j];
				lastMaxIndex = j;
			}
		}
		answer = answer + max_text;
		start = lastMaxIndex + 1;
		end++;
		max = 0;
	}
	return answer;

}