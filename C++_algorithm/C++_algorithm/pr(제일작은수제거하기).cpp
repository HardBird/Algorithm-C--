#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	// ���� ���� �� ����
	int Min = 99999999;
	int minIdx;
	for (int i = 0; i < arr.size(); i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
			minIdx = i;
		}
	}

	// ���� ���� �� ���� ����
	for (int i = 0; i < arr.size(); i++)
	{
		if (i == minIdx)
		{
			continue;
		}

		answer.push_back(arr[i]);
	}

	// �� �迭�� ���
	if (answer.size() == 0)
	{
		answer.push_back(-1);
		return answer;
	}
	else
	{
		return answer;
	}
}
