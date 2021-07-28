#include <bits/stdc++.h>

using namespace std;


vector<int> solution(vector<int> prices) {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int cnt = 0;
	int temp_size = prices.size();

	vector<int> answer;
	stack<int> s;
	for (int i = 0; i < prices.size(); i++) {
		int ch = 0;  
		for (int j = i + 1; j < prices.size(); j++) {
			if (prices[i] <= prices[j]) ch++;
			else {
				ch++;
				break;
			}
		}
		answer.push_back(ch);
	}

	return answer;
}
