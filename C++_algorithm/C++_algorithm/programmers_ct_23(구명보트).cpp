#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	int start = 0, end = people.size() - 1;
	int temp = people.size() - 1;

	sort(people.begin(),people.end());

	while (start<=end) {
		if (people[start] + people[end] <= limit) {
			start++;
			end--;
		}
		else { 
			end--;
		}
		answer++;
	}
	return answer;
}