#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
string main(string s)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string answer;
	string tmp;
	vector<int> v;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			v.push_back(atoi(tmp.c_str()));
			tmp = "";
		}
		else tmp = tmp + s[i];
	}
	v.push_back(atoi(tmp.c_str())); //마지막은 공백처리가 아니기에 한번더 푸쉬백 해준다.
	sort(v.begin(), v.end(), greater<int>());
	answer = to_string(v.back()) + " " + to_string(v.front());


	return answer;
}