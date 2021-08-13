#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map <string, int>umap;
	//������ ��� ��� value�� 1
	for (string name : participant)
		umap[name]++;
	//������ ����� value�� 0
	for (string name : completion)
		umap[name]--;
	//value�� 1��, �� �������� ���� ����� ã��
	for (string name : participant) {
		if (umap[name] == 1)
			answer = name;
	}
	return answer;
}