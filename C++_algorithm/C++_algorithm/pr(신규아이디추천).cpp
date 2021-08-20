#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
	string answer = "";
	int i = 0;
	//step 1: �빮�ڸ� �ҹ��ڷ� ġȯ
	for (i = 0; i < new_id.length(); i++) {
		if (new_id[i] >= 'A' && new_id[i] <= 'Z')
			new_id[i] = tolower(new_id[i]);
	}
	//step 2: �ҹ���, ����, ����, ����, ��ħǥ�� answer�� �߰�
	for (i = 0; i < new_id.length(); i++) {
		if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
			answer.push_back(new_id[i]);
	}
	//step 3: ��ħǥ�� 2�� �̻� ���ӵǸ� �ϳ� �����
	i = 1;
	while (i < answer.length()) {
		if (answer[i - 1] == '.' && answer[i] == '.') {
			answer.erase(answer.begin() + i);
			continue;
		}
		i++;
	}
	//step 4: ó���� ���� ��ħǥ �����ϱ�
	if (answer[0] == '.')
		answer.erase(answer.begin());
	if (answer[answer.length() - 1] == '.')
		answer.erase(answer.end() - 1);
	//step 5: �� ���ڿ��̶�� "a" �����ϱ�
	if (answer.length() == 0)
		answer.push_back('a');
	//step 6: ���̰� 16 �̻��̸� 16��° ���ں��� ������ �����ϱ� (���� �� �� ��ħǥ ����)
	if (answer.length() >= 16) {
		answer.erase(answer.begin() + 15, answer.end());
		if (answer[answer.length() - 1] == '.')
			answer.erase(answer.end() - 1);
	}
	//step 7: ���̰� 2 ���϶�� ���̰� 3�� �ɶ����� ������ ���� ���̱�
	if (answer.length() <= 2) {
		char c = answer[answer.length() - 1];
		while (answer.length() != 3) {
			answer.push_back(c);
		}
	}
	return answer;
}