#include <bits/stdc++.h>

using namespace std;
int student[30];
//if가 0이면 거짓 나머지는 참의 값 
int solution(int n, vector<int> lost, vector<int> reserve) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	for (int i : reserve) student[i] += 1;
	for (int i : lost) student[i] += -1;
	for (int i = 1; i <= n; i++) {
		if (student[i] == -1) {
			if (student[i - 1] == 1)
				student[i - 1] = student[i] = 0;
			else if (student[i + 1] == 1)
				student[i] = student[i + 1] = 0;
		}
	}
	for (int i = 1; i <= n; i++)
		if (student[i] != -1) answer++;

	return answer;
}