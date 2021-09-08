#include <bits/stdc++.h>
using namespace std;
bool vis[201][201];
bool ans[201];
int a, b, c;

void go(int x, int y, int z) {
	if (vis[x][y]) return;
	if (x == 0) ans[z] = true;
	vis[x][y] = true;

	if (x + y > b) go(x + y - b, b, z);
	else go(0, x + y, z);

	if (x + z > c) go(x + z - c, y, c);
	else go(0, y, x + z);

	if (x + y > a) go(a, x + y - a, z);
	else go(x + y, 0, z);

	if (y + z > c) go(x, y + z - c, c);
	else go(x, 0, y + z);

	if (x + z > a) go(a, y, x + z - a);
	else go(x + z, y, 0);

	if (y + z > b) go(x, b, y + z - b);
	else go(x, y + z, 0);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> a >> b >> c;
	go(0, 0, c);
	for (int i = 0; i < 201; i++) {
		if (ans[i]) cout << i << ' ';
	}
}