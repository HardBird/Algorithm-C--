#include <bits/stdc++.h>

using namespace std;
int answer[11];
int N = 2;
int tot = 0;
void dfs(int depth) {
	int i;
	if (depth > N) {
		tot++;
		for (i = 1; i <= N; i++) {
			cout << answer[i] << " " ;
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= 6; i++) {
		answer[depth] = i;
		dfs(depth + 1);
	}
}


int main()
{
	dfs(1);
	cout <<"answer: "<< tot;
	return 0;
}