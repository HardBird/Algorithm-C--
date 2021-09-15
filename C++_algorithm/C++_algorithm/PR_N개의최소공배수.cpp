#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
	int answer = 0;
	int temp = 1;
	for (int i = 0; i < arr.size(); i++) {
		temp = lcm(temp, arr[i]);
	}
	answer = temp;
	return answer;
}