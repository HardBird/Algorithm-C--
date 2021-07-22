#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	//우선순위큐 오름차순
	priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());
	//음식이 최소2개이상이고 제일안매운 음식이 K보다 작을때까지만 반복
	while (pq.size() > 1 && pq.top() < K) {
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		//두개의 음식을 섞어서 우선순위 큐에 추가
		pq.push(first + (second * 2));
		//조합 횟수 증가
		answer++;
	}
	//모든 조합이 끝났을때 우선순위 큐의 제일 맵지 않은 음식이 K보다 작다면 -1을 리턴
	if (pq.top() < K)
		return -1;
	return answer;
} 

//우선순위큐 초기화방법
 
/*
우선순위큐는 큐와다르게 넣자마자 정렬을 알아서 해주기에 시간복잡도에서 시간의 이점을 가지고 올 수 있으며 해당문제에 대해서 초반 초기화는 아래와 같이 작성할 수 있다.
priority_queue<int,vector<int>,greater<int>> pq (scoville.begin(),scoville.end());
반대는 less이지만 less는 기본 디폴트값이므로 굳이 안작성해도된다. 
list는 사용이 불가능하니 vector를 기억하자
*/