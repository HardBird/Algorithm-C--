#include <string>
#include <vector>
#include <map>
using namespace std;
int solution(vector<vector<string>> clothes) {
	map <string, int> myclothes;
	int answer = 1;
	for (auto item : clothes)
		myclothes[item[1]]++;
	for (auto tmp : myclothes)
		answer *= (tmp.second + 1);
	return answer - 1;
}