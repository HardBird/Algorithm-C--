#include <bits/stdc++.h>

using namespace std;
int N;
vector<int> v;


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	//sort (����,��,�Լ�) 
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
		cout << v[i] << endl;
	return 0;
}