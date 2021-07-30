#include <bits/stdc++.h>

using namespace std;

//https://www.youtube.com/watch?v=u65F4ECaKaY �����Ͱ��� �ٷ������� 

bool isCorrect(string str, int* pos) {
	bool ret = true;
	int left = 0, right = 0;
	stack<char> s;

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '(')
		{
			left++;
			s.push('(');
		}
		else
		{
			right++;
			if (s.empty())return false;
			else s.pop();
		}
		if (left == right)
		{
			*pos = i + 1; //v�迭����ġ�� u�� ���̷� Ȱ��
			return ret;
		}
	}
	return true;
}

//if�� 0�̸� ���� �������� ���� �� 
string main(string p)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	if (p.empty()) return p;

	int pos;
	bool correct = isCorrect(p, &pos);

	//������ ���� ȣ���� ���������� �ش� u,v�� ��ġ�� ���� �� ����.
	string u = p.substr(0, pos);
	string v = p.substr(pos, p.length() - pos);

	if (correct) {
		return u + main(v);
	}
	string answer = "(" + main(v) + ")";

	for (int i = 1; i < u.length() - 1; ++i)
	{
		if (u[i] == '(')answer += ")";
		else answer += "(";
	}

	return answer;
}