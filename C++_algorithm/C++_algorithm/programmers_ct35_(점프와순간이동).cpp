#include <bits/stdc++.h>

using namespace std;



//if가 0이면 거짓 나머지는 참의 값 
int main(int n)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int ans = 0;

	while (n != 0) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n--;
			ans++;
		}
	}
	return ans;
}