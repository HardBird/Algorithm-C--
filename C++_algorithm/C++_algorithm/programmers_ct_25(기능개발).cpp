#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	vector<int> answer;
	vector<int> temp;
	int s;
	for (int i = 0; i < progresses.size(); i++) {
		s = (100 - progresses[i]) % speeds[i];
		if (s > 0) {
			temp.push_back((100 - progresses[i]) / speeds[i] + 1);
		}
		else
		{
			temp.push_back((100 - progresses[i]) / speeds[i]);
		}
	}
	s = temp[0];
	int cnt = 0;
	for (int i = 0; i < temp.size(); i++) {
		if (s < temp[i]) {
			answer.push_back(cnt);
			cnt = 1;
			s = temp[i];
		}
		else {
			cnt++;
		}
		if (i == temp.size() - 1) {
			answer.push_back(cnt);
		}

	}
	return answer;
}