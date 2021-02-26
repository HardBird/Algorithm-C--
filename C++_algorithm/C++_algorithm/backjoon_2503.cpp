#include <bits/stdc++.h> 
using namespace std;
#define NUMBERSIZE 3 
int result; 
int test;

struct question { string num; int strike; int ball; };
vector<question> questionV; 

int main() {
	int n; 
	question input;
	cin >> n; 

	for (int i = 0; i < n; i++) { 
		cin >> input.num >> input.strike >> input.ball; questionV.push_back(input); 
	}

	for (int i = 123; i <= 987; i++) { 
		string target = to_string(i); 
		test = 0; 
		// 숫자가 0 일 경우 continue, 중복 숫자가 있을 경우 continue. 
		if (target[0] == '0' || target[1] == '0' || target[2] == '0' || target[0] == target[1] || target[1] == target[2] || target[2] == target[0]) { continue; } 
		for (int j = 0; j < n; j++) { 
			int targetStrike, targetBall; 
			targetStrike = targetBall = 0; 

		for (int k = 0; k < NUMBERSIZE; k++) { 
			// 같은 자리일때 Strike를 증가
			if (target[k] == questionV[j].num[k]) targetStrike++; 

			// 다른 자리의 숫자일때 Ball을 증가 
			if (target[k] == questionV[j].num[(k + 1) % NUMBERSIZE] || target[k] == questionV[j].num[(k + 2) % NUMBERSIZE]) targetBall++;
		} // Strike, Ball의 수가 같을 때 test의 값을 증가. 
		if (questionV[j].strike == targetStrike && questionV[j].ball == targetBall) { test++; } 
		} // 모든 경우에 대해 가능한 숫자일 경우 결괏값을 증가. 
		if (test == n) { result++; } 
	
	} 
	
	cout << result; 
}
