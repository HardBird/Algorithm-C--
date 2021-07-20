#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 

int Fibonacci(int num) {
	if (num == 0) return 0;
	else if (num == 1)return 1;
	else return (Fibonacci(num - 1) + Fibonacci(num - 2)) % 1234567;
}

int solution(int n) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	answer = Fibonacci(n);
	return answer;
}