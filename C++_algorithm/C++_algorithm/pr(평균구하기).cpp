#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
double solution(vector<int> arr) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double answer = 0;
	for (int i = 0; i < arr.size(); i++)
		answer += arr[i];
	return answer / arr.size();

}