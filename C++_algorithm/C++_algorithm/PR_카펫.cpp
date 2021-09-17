// ī��
#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	int area = brown + yellow;  // ī���� ����

	for (int height = 3; height <= sqrt(area); height++) {
		if (area % height == 0) {
			int width = area / height;

			// ������ �� Ȯ��
			if (((width + height) * 2 - 4) == brown) {
				answer.push_back(width);
				answer.push_back(height);
				break;
			}
		}
	}

	return answer;
}

