#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<vector<int>> results) {
	int answer = 0;
	int arr[101][101] = { 0, };

	for (int i = 0; i < results.size(); i++) {//i 가 j 를 이긴것을 1로 표기
		arr[results[i][0]][results[i][1]] = 1;
	}

	for (int c = 1; c <= n; c++) {//c를 통해서 승패를 결정할 수 있는 경우를 확인
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][c] == 1 && arr[c][j] == 1) { arr[i][j] = 1; }
			}
		}
	}

	for (int c = 1; c <= n; c++) {//c가 다른 선수와 이기건 지건 상관없이 n-1번의 승패가 결정된다면 순위를 알수있다
		int check = 0;
		for (int i = 1; i <= n; i++) {
			check += (arr[c][i] + arr[i][c]);
		}
		if (check == n - 1) { answer++; }
	}
	return answer;

}
