#include <bits/stdc++.h>

using namespace std; 
int stack_temp[10000], top = -1;

void push(int x)
{
	stack_temp[++top] = x;
}
void pop()
{
	cout << stack_temp[top] << endl;
	stack_temp[top--] = 0;
}
int empty()
{
	if (top == -1) return 1;
	else return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N; 
	for (int i = 0; i < N; i++)
	{
		char str[101];
		cin >> str;
		if (!strcmp(str, "push")) {
			int x; cin >> x;
			push(x);
		}
		else if (!strcmp(str, "top")) {
			if (empty() == 1)cout << "-1" << endl;
			else cout << stack_temp[top] << endl;
		}
		else if (!strcmp(str, "pop")) {
			pop();
		}
		else if (!strcmp(str, "empty")) {
			cout << empty() << endl;
		}
		else {
			cout << top + 1 << endl;
		}
	}
	return 0;
}