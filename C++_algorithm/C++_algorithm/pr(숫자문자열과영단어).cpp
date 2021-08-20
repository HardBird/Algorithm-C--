#include <string>
using namespace std;

bool isNum(char c) {
	return '0' <= c && c <= '9';
}

int solution(string s) {
	int answer = 0;

	string str = "";
	for (int i = 0; i < s.size(); i++) {
		if (isNum(s[i])) {
			str.push_back(s[i]);
			continue;
		}
		if ( s.substr(i, 5) == "three") str.push_back('3');
		else if ( s.substr(i, 5) == "seven") str.push_back('7');
		else if (s.substr(i, 5) == "eight") str.push_back('8');
		else if ( s.substr(i, 4) == "zero") str.push_back('0');
		else if ( s.substr(i, 4) == "four") str.push_back('4');
		else if (s.substr(i, 4) == "five") str.push_back('5');
		else if (s.substr(i, 4) == "nine") str.push_back('9');
		else if ( s.substr(i, 3) == "one") str.push_back('1');
		else if (s.substr(i, 3) == "two") str.push_back('2');
		else if (s.substr(i, 3) == "six") str.push_back('6');
	}

	answer = stoi(str);
	return answer;
}