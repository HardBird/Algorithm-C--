#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
int main(vector<int> priorities, int location)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	priority_queue <int> pq;
	queue<pair<int, int>> q;
	for (int i = 0; i < priorities.size(); i++) {
		pq.push(priorities[i]);
		q.push(make_pair(priorities[i], i));
	}

	while (true) {
		// a == �߿䵵, b == ����
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		if (a == pq.top()) {
			pq.pop();
			answer++;
			if (b == location) break;
		}
		else {
			q.push(make_pair(a, b));
		}

	}
	return answer;

}