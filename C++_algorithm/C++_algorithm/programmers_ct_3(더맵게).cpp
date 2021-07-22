#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	//�켱����ť ��������
	priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());
	//������ �ּ�2���̻��̰� ���Ͼȸſ� ������ K���� ������������ �ݺ�
	while (pq.size() > 1 && pq.top() < K) {
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		//�ΰ��� ������ ��� �켱���� ť�� �߰�
		pq.push(first + (second * 2));
		//���� Ƚ�� ����
		answer++;
	}
	//��� ������ �������� �켱���� ť�� ���� ���� ���� ������ K���� �۴ٸ� -1�� ����
	if (pq.top() < K)
		return -1;
	return answer;
} 

//�켱����ť �ʱ�ȭ���
 
/*
�켱����ť�� ť�ʹٸ��� ���ڸ��� ������ �˾Ƽ� ���ֱ⿡ �ð����⵵���� �ð��� ������ ������ �� �� ������ �ش繮���� ���ؼ� �ʹ� �ʱ�ȭ�� �Ʒ��� ���� �ۼ��� �� �ִ�.
priority_queue<int,vector<int>,greater<int>> pq (scoville.begin(),scoville.end());
�ݴ�� less������ less�� �⺻ ����Ʈ���̹Ƿ� ���� ���ۼ��ص��ȴ�. 
list�� ����� �Ұ����ϴ� vector�� �������
*/