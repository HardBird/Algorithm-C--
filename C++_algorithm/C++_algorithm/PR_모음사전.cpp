#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void DFS(string s) {
	if (s.size() == 5) return;
	for (auto c : string("AEIOU")) {
		string nxt = s + c;
		v.push_back(nxt);
		DFS(nxt);
	}
}

int solution(string s) {
	DFS(""); sort(v.begin(), v.end());
	return lower_bound(v.begin(), v.end(), s) - v.begin() + 1;
}