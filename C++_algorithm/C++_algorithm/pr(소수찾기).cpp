#include <string>
#include <vector>

using namespace std;
//그냥 소수찾기 말고 에라토스테네스의체 사용 
int solution(int n) {
	int answer = 0;
	bool arr[1000001];
	arr[0] = true, arr[1] = true;
	for (int i = 2; i <= n; i++) {
		if (arr[i])  continue;
		else {
			answer++;
			for (int j = i * 2; j <= n; j += i)    arr[j] = true;
		}
	}
	return answer;
}