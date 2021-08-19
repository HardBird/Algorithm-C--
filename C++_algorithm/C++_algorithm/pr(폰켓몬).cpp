#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums) {
	int answer = 0;
	map<int, int> m;

	for (int i = 0; i < nums.size(); i++)
		m[nums[i]]++;

	if (nums.size() / 2 >= m.size())
		answer = m.size();
	else
		answer = nums.size() / 2;

	return answer;
}