#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {


	int answer = 1;
	map<string, int> m;
	map<string, int>::iterator i;

	for (auto item : clothes)
	{
		m[item[1]]++;
	}
	for (i = m.begin(); i != m.end(); i++)
	{
		cout << i->first << " ";
		cout << i->second << endl;
	}

	map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		answer *= it->second + 1;
	}
	return answer - 1;

}

int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	solution({ {"yellowhat", "headgear"} , {"bluesunglasses", "eyewear"},{"green_turban", "headgear"} });

}