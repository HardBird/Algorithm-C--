#include <queue>
#include <iostream>
using namespace std;
int x, y; //x´Â ¼öºó, y´Â µ¿»ý ÁÂÇ¥
int trace[100001];
queue<int> q;
int bfs() {
	q.push(x);
	trace[x] = 1;
	while (!q.empty()) {
		int p = q.front();
		q.pop();
		if (p == y) return trace[p] - 1;

		if (p - 1 >= 0 && trace[p - 1] == 0) {
			q.push(p - 1);
			trace[p - 1] = trace[p] + 1;
		}
		if (p + 1 <= 100000 && trace[p + 1] == 0) {
			q.push(p + 1);
			trace[p + 1] = trace[p] + 1;
		}
		if (p * 2 <= 100000 && trace[2 * p] == 0) {
			q.push(p * 2);
			trace[p * 2] = trace[p] + 1;
		}
	}
}
int main(void) {
	cin >> x >> y;

	cout << bfs();

	return 0;
}