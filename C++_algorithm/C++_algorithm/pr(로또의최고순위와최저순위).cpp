#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
//등수를 위한 함수 
int result(int n) {
	if (n == 6) {
		return 1;
	}
	else if (n == 5) {
		return 2;
	}
	else if (n == 4) {
		return 3;
	}
	else if (n == 3) {
		return 4;
	}
	else if (n == 2) {
		return 5;
	}
	else { return 6; }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	vector<int> answer;
	// 오름차순 정렬
	sort(lottos.begin(), lottos.end());
	sort(win_nums.begin(), win_nums.end());

	int collect = 0;
	int ze = 0;
	for (int i = 0; i < 6; i++) {
		if (lottos[i] == 0) { ze++; }
		else { break; }
	}

	int temp = ze;
	for (int i = 0; i < 6; i++) {
		if (temp == 6) { break; }
		for (int j = temp; j < 6; j++) {
			if (win_nums[i] == lottos[j]) { collect++; temp = ++j; break; }
		}
	}
	answer.push_back(result(collect + ze));
	answer.push_back(result(collect));

	return answer;
}