#include <string>
#include <vector>

using namespace std;
//�׳� �Ҽ�ã�� ���� �����佺�׳׽���ü ��� 
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