#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 

vector<int> solution(vector<int> numbers) {

	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	vector<int> answer;
	bool check[200] = { false, };

	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			int sum = numbers[i] + numbers[j];

			if (check[sum] == false)
			{
				answer.push_back(sum);
				check[sum] = true;
			}
		}
	}

	sort(answer.begin(), answer.end());
	return answer;
}