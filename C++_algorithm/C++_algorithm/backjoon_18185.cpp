#include <bits/stdc++.h>

using namespace std;
int ramen[10010] = { 0 };
int cost = 0;
int N;
int min(int a, int b) { return a > b ? b : a; }

void three(int k) {
	while (ramen[k] && ramen[k + 1] && ramen[k + 2]) {
		ramen[k]--;
		ramen[k + 1]--;
		ramen[k + 2]--;
		cost += 7;
	}
}

void two(int k) {
	while (ramen[k] && ramen[k + 1]) {
		ramen[k]--;
		ramen[k + 1]--;
		cost += 5;
	}
}

void one(int k) {
	cost += 3 * ramen[k];
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> N; 
	for (int i = 0; i < N; i++) cin >> ramen[i];
	for (int i = 0; i < N; i++) {
		if (ramen[i + 1] > ramen[i + 2]) {
			int k = min(ramen[i], ramen[i + 1] - ramen[i + 2]);
			ramen[i] -= k;
			ramen[i + 1] -= k;
			cost += 5 * k;

			three(i);
			one(i);
		}
		else { three(i); two(i); one(i); }
	}
	cout << cost;
	return 0;

}