#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dp[100001][4];
int solution(vector<vector<int> > land)
{
	int answer = 0;
	dp[land.size() - 1][0] = land[land.size() - 1][0];
	dp[land.size() - 1][1] = land[land.size() - 1][1];
	dp[land.size() - 1][2] = land[land.size() - 1][2];
	dp[land.size() - 1][3] = land[land.size() - 1][3];

	for (int k = land.size() - 2; k >= 0; k--) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i == j) continue;
				dp[k][i] = max(dp[k][i], land[k][i] + dp[k + 1][j]);
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		if (answer < dp[0][i]) answer = dp[0][i];
	}
	return answer;
}