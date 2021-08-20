#include <string>
#include <vector>
using namespace std;

int distance(int &pos, int &target) {
	int sum = 0;
	int p = pos; int t = target;
	if (p == 0) p = 11;
	if (t == 0) t = 11;
	if (p > t + 1) { //�հ��� ��ġ�� �� �Ʒ� ������ ��� ���� �̵�
		while (p > t + 1) {
			sum++;
			p -= 3;
		}
	}

	if (p < t - 1) { //�հ��� ��ġ�� �� �� ������ ��� �Ʒ��� �̵�
		while (p < t - 1) {
			sum++;
			p += 3;
		}
	}

	sum += abs(p - t);
	return sum;
}



string solution(vector<int> numbers, string hand) {
	string answer = "";
	bool isLeft = (hand == "left") ? true : false;
	int left_pos = 10, right_pos = 12;

	for (int i = 0; i < numbers.size(); i++) {
		if ((numbers[i] == 1) || (numbers[i] == 4) || (numbers[i] == 7)) {
			answer += "L";
			left_pos = numbers[i];
		}
		else if ((numbers[i] == 3) || (numbers[i] == 6) || (numbers[i] == 9)) {
			answer += "R";
			right_pos = numbers[i];
		}
		else {
			if (distance(left_pos, numbers[i]) < distance(right_pos, numbers[i])) {
				answer += "L";
				left_pos = numbers[i];
			}
			else if (distance(left_pos, numbers[i]) > distance(right_pos, numbers[i])) {
				answer += "R";
				right_pos = numbers[i];
			}
			else { //�� �հ����� �Ÿ��� ���� ���
				if (isLeft) {
					answer += "L";
					left_pos = numbers[i];
				}
				else {
					answer += "R";
					right_pos = numbers[i];
				}
			}
		}
	}
	return answer;
}