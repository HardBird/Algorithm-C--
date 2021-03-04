#include <bits/stdc++.h>

using namespace std;
int temp[8];
int ck_as = 0, ck_des = 0;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	for (int i = 0; i < 8; i++) cin >> temp[i];
	for (int i = 0; i < 8; i++)
	{
		if (temp[i] == i + 1)
		{
			ck_as++;
		}
		else if (temp[i] == 8 - i)
		{
			ck_des++;
		}

	}
	if (ck_as == 8)cout << "ascending" << endl;
	else if (ck_des == 8)cout << "descending" << endl;
	else cout << "mixed" << endl;

	return 0;
}