#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

vector<int> solution(vector<int> enter, vector<int> leave)
{
	vector<int> answer;
	vector<int> in_room;
	vector<set<int>> v(enter.size() + 1);
	int i = 0;
	for (int j = 0; j < leave.size(); j++)
	{
		while (1)
		{
			if (find(in_room.begin(), in_room.end(), leave[j]) != in_room.end())
			{
				int dist = find(in_room.begin(), in_room.end(), leave[j]) - in_room.begin();
				in_room.erase(in_room.begin() + dist);
				break;
			}
			else
			{
				if (i < enter.size())
				{
					for (auto k : in_room)
					{
						v[k].insert(enter[i]);
						v[enter[i]].insert(k);
					}
					in_room.push_back(enter[i]);

				}
				i++;
			}

		}
	}
	for (int i = 1; i <= enter.size(); i++)
	{
		answer.push_back(v[i].size());
	}
	return answer;
}