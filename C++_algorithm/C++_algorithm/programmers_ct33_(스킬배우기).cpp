#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 
int main(string skill, vector<string> skill_trees)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;

	for (int i = 0; i < skill_trees.size(); i++)
	{
		string check;

		for (int j = 0; j < skill_trees[i].size(); j++)
		{
			for (int k = 0; k < skill.size(); k++)
			{
				// ��ų���� ã�� ���
				if (skill_trees[i][j] == skill[k])
				{
					check += skill_trees[i][j];
					break;
				}
			}
		}

		// ���� Ȯ��
		int flag = 0;
		for (int j = 0; j < check.size(); j++)
		{
			if (check[j] != skill[j])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			answer++;
		}
	}

	return answer;
}