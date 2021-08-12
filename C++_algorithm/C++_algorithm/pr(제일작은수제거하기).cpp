#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	// 제일 작은 수 제거
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

	// 제일 작은 수 빼고 삽입
	for (int i = 0; i < arr.size(); i++)
	{
		if (i == minIdx)
		{
			continue;
		}

		answer.push_back(arr[i]);
	}

	// 빈 배열인 경우
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
