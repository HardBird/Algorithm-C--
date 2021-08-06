#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(string arrangement)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	stack <char> pipe;

	for (int i = 0; i < arrangement.length(); i++) {
		if (arrangement[i] == '(') pipe.push(arrangement[i]);
		else {
			pipe.pop();
			if (arrangement[i - 1] == '(') answer += pipe.size();
			else answer += 1;
		}
	}
	return answer;

}