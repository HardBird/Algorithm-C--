#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map <string, int>umap;
	//참여한 사람 모두 value가 1
	for (string name : participant)
		umap[name]++;
	//완주한 사람은 value가 0
	for (string name : completion)
		umap[name]--;
	//value가 1인, 즉 완주하지 못한 사람을 찾기
	for (string name : participant) {
		if (umap[name] == 1)
			answer = name;
	}
	return answer;
}