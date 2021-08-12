#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m)//최대공약수
{
	while (m)
	{
		int r = n % m;
		n = m;
		m = r;
	}
	return n;
}
int lcm(int n, int m)//최소공배수
{
	return n * m / gcd(n, m);
}
vector<int> solution(int n, int m) {
	vector<int> answer;
	//최대공약수,최소공배수
	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m));
	return answer;
}