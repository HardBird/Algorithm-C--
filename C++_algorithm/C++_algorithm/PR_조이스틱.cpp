#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {
	int answer = 0;
	for (int i = 0; i < name.length(); i++)
	{
		answer += min(name[i] - 'A', 'Z' - name[i]+1);
	}

	int len = name.length();
	int move = len - 1;
	int next;
	for (int i = 0; i < len; i++) {
		next = i + 1;
		while (next < len && name[next] == 'A') next++;
		move = min(move,i+i+(len-next));
	}
	answer += move;

	return answer;
}
