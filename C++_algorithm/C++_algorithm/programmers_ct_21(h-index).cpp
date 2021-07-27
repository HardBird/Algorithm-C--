#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(vector<int> citations)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	sort(citations.begin(), citations.end(), greater<int>());

	for (int i = 0; i < citations.size(); i++) {
		if (citations[i] <= answer) break;
		answer++;
	}
	return answer;
}