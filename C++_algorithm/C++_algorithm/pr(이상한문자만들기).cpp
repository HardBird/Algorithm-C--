#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int cnt = -1;
	for (int i = 0; i < s.size(); i++) {
		cnt++;
		if (s[i] == ' ') {
			cnt = -1;
		}
		if (cnt == 0) {
			answer += toupper(s[i]);
		}
		else if (cnt % 2 == 0) {
			answer += toupper(s[i]);
		}
		else {
			answer += tolower(s[i]);
		}
	}
	return answer;
}