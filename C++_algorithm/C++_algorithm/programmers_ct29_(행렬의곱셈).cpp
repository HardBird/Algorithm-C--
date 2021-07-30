#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	vector<vector<int>> answer;

	for (int i = 0; i < arr1.size(); i++) {
		vector<int> v;
		for (int j = 0; j < arr2[0].size(); j++) {
			int sum = 0;
			for (int k = 0; k < arr1[0].size(); k++) {
				sum += arr1[i][k] * arr2[k][j];
			}
			v.push_back(sum);
		}
		answer.push_back(v);
	}

	return answer;
}