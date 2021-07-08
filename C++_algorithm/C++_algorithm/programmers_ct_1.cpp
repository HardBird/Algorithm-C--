#include <bits/stdc++.h>

using namespace std;


void solution(string s) {
	stack<int> st;

	for (int i = 0; i < s.size(); i++) {
		if (st.empty() || st.top() != s[i]) st.push(s[i]);
		else st.pop();
	}
}



int main(void) {
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	string S;
	cin >> S;
	solution(S);
	return 0;
}