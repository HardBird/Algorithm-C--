#include <bits/stdc++.h>

using namespace std;


int answer = 0;

void dfs(vector<int> numbers, int target, int sum, int count) {
	if (count == numbers.size()) {
		if (sum == target) answer++;
		return;
	}
	dfs(numbers, target, sum + numbers[count], count + 1);
	dfs(numbers, target, sum - numbers[count], count + 1);
}

int main(vector<int> numbers, int target)
{

	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	return answer;

}