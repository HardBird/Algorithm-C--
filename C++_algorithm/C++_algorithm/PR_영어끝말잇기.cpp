#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
	int len = words.size();
	map<string, int> h;
	h[words[0]] = 1;
	for (int i = 1; i < len; i++)
	{
		int temp = words[i - 1].size();
		if (h[words[i]] || (words[i - 1][temp - 1] != words[i][0]))
			return { i%n + 1,i / n + 1 };
		else
			h[words[i]] = 1;
	}
	return { 0,0 };
}