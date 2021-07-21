#include <bits/stdc++.h>

using namespace std;
int GCD(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}
int main(vector<int> arr) {

	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;
	int lcm = 1;
	for (int i = 0; i < arr.size(); i++) {
		lcm = LCM(lcm, arr[i]);
	}
	answer = lcm;
	return answer;
}

//최대공약수, 최소공배수 공식만 사용하면 아주쉬운문제 