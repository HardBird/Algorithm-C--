#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int answer = 1;
	int w, h;
	cin >> w >> h; 
	int GCD = gcd(w, h);

	answer = w * h - (w + h - GCD);
	return 0;
}