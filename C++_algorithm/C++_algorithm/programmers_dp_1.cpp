#include <bits/stdc++.h>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	string input;
	stack<char> temp;
	int pair1 = 0, pair2 = 0, pair3 = 0;
	cin >> input;
	 
	for (int i = 0; i < input.size() ;i++)
	{

		if (input[i] =='(')        pair1++;
		else if (input[i] =='[')    pair2++;
		else if (input[i] =='{')    pair3++;

		else if (input[i] ==')')    pair1--;
		else if (input[i] ==']')    pair2--;
		else if (input[i] =='}')    pair3--;
	}
	if (pair1 == 0 && pair2 == 0 && pair3 == 0) printf("괄호의 짝이 맞습니다.");
	else printf("괄호의 짝이 안맞습니다.");
	return 0;
}