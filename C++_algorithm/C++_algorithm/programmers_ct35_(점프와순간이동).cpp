#include <bits/stdc++.h>

using namespace std;



//if�� 0�̸� ���� �������� ���� �� 
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