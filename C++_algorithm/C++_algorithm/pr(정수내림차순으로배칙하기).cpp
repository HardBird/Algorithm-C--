#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	string s = to_string(n);
	vector<int> a;
	for (int i = 0; i < s.size(); i++) {	// vector a �� ����
		a.push_back(s[i] - '0');
	}
	sort(a.begin(), a.end(), greater<int>());	// ������������ sort
	s = "";
	for (int i = 0; i < a.size(); i++) {	// string�� ����
		s += to_string(a[i]);
	}
	long long answer = stoll(s);	// long long���� ����ȯ
	return answer;
}