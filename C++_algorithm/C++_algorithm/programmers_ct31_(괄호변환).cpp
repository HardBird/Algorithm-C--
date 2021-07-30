#include <bits/stdc++.h>

using namespace std;

//https://www.youtube.com/watch?v=u65F4ECaKaY 포인터개념 바로잡고들어가자 

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
			*pos = i + 1; //v배열의위치와 u의 길이로 활용
			return ret;
		}
	}
	return true;
}

//if가 0이면 거짓 나머지는 참의 값 
string main(string p)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	if (p.empty()) return p;

	int pos;
	bool correct = isCorrect(p, &pos);

	//참조에 의한 호출을 하지않으면 해당 u,v에 위치를 잡을 수 없다.
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