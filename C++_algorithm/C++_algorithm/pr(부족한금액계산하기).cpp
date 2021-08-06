#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
long long solution(int price, int money, int count)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	long long answer = -1;
	long long temp = 1;
	long long tot_price = 0;
	for (int i = 1; i <= count; i++)
	{
		temp = i * price;
		tot_price +=temp;
	}
	answer = tot_price - money;

	if (answer < 0) return 0;
	else return answer;
}