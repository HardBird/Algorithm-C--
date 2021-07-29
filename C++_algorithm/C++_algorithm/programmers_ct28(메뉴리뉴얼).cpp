//DFS접근이 원초적인 방법이라고 하는데 나는 해당 문제를 보자마자 NP가 떠올랐고 np로 푸는 방법은 아래와 같이 기재하였다.
// 출처링크는 https://ansohxxn.github.io/programmers/82/ 이며, 꼭 다시 봐야하는 문제이다 ! 

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
	return a.second > b.second;
}

vector<string> solution(vector<string> orders, vector<int> course) {
	vector<string> answer;
	map<string, int> dic;

	for (int i = 0; i < orders.size(); i++) {
		sort(orders[i].begin(), orders[i].end());

		for (int j = 0; j < course.size(); j++) {
			if (course[j] > orders[i].length())
				continue;
			vector<bool> temp(orders[i].length(), true);
			for (int k = 0; k < course[j]; k++)
				temp[k] = false;
			do {
				string str = "";
				for (int k = 0; k < orders[i].length(); k++)
					if (temp[k] == false)
						str += orders[i][k];
				dic[str]++;
			} while (next_permutation(temp.begin(), temp.end()));
		}
	}

	vector<pair<string, int>> sorted;
	for (auto& order : dic)
		if (order.second > 1)
			sorted.push_back(make_pair(order.first, order.second));
	sort(sorted.begin(), sorted.end(), cmp);

	for (int i = 0; i < course.size(); i++) {
		int max = 0;
		for (int j = 0; j < sorted.size(); j++) {
			if (sorted[j].first.length() != course[i])
				continue;
			else if (max == 0) {
				answer.push_back(sorted[j].first);
				max = sorted[j].second;
			}
			else if (max == sorted[j].second)
				answer.push_back(sorted[j].first);
			else
				break;
		}
	}

	sort(answer.begin(), answer.end());
	return answer;
}

