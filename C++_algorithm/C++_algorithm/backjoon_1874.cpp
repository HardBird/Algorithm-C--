#include <bits/stdc++.h>

using namespace std;
stack<int> temp;
vector<char> temp_ck;
int N;
int M;
int cnt = 1;
int ck_fail = 0;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> N;
	while (N != 0)
	{
		cin >> M;
		if (temp.empty())
		{
			temp.push(cnt);
			cnt++;
			temp_ck.push_back('+');
		}
		if (!temp.empty() && temp.top() > M)
		{
			ck_fail = 1;
		}
		//while문으로 구현한부분 헷갈리지말자 
		while (!temp.empty() && temp.top() < M)
		{
			temp.push(cnt);
			cnt++;
			temp_ck.push_back('+');
		}
		if (!temp.empty()&& temp.top() == M)
		{
			temp.pop();
			temp_ck.push_back('-');
		}
		N--;
	}

	if (ck_fail == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
	for (int i = 0; i<temp_ck.size(); i++)cout << temp_ck[i] << " ";
	}
	return 0;
}