#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	string s = to_string(n);
	vector<int> a;
	for (int i = 0; i < s.size(); i++) {	// vector a 에 대입
		a.push_back(s[i] - '0');
	}
	sort(a.begin(), a.end(), greater<int>());	// 내림차순으로 sort
	s = "";
	for (int i = 0; i < a.size(); i++) {	// string에 대입
		s += to_string(a[i]);
	}
	long long answer = stoll(s);	// long long으로 형변환
	return answer;
}