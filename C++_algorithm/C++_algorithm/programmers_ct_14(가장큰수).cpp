#include <bits/stdc++.h>

using namespace std;


bool cmp(const string &a, const string &b) { //string���� �� ����
	return a + b > b + a;
}

string solution(vector<int> numbers) { //���� ū �� - success
	string answer = "";
	vector<string> tmp;
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	for (int i = 0; i < numbers.size(); i++) tmp.push_back(to_string(numbers[i]));

	sort(tmp.begin(), tmp.end(), cmp); //cmp �Լ� �������� ���� ����

	for (int i = 0; i < tmp.size(); i++) answer += tmp[i];

	if (answer[0] == '0') return "0"; //answer[0]�� 0�̸� ���� ū ���� 0�̶�� ���̹Ƿ� 0����

	return answer;
}