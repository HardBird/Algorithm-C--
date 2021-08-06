#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int solution(vector<int> absolutes, vector<bool> signs) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	for (int i = 0; i < absolutes.size(); i++) {
		if (!signs[i])absolutes[i] *= -1;
		answer += absolutes[i];
	}
	return answer;
}