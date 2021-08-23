#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
string solution(vector<string> table, vector<string> languages, vector<int> preference) {
	string answer = "";
	string lang = "";
	int max = 0;
	map<int, vector<string>> score;

	for (auto job : table)
	{
		int point = 5;
		int temp_score = 0;
		string temp_lang;
		stringstream stream;
		stream.str(job);
		stream >> temp_lang;
		while (stream >> lang && 0 < point)
		{
			cout << lang << " ";
			for (int i = 0; i < languages.size(); i++)
				if (languages[i] == lang)
				{
					temp_score += point * preference[i];
					break;
				}
			point--;
		}
		cout << endl;
		cout << "===================" << endl;
		score[temp_score].push_back(temp_lang);
		if (max < temp_score)
			max = temp_score;
	}

	sort(score[max].begin(), score[max].end());
	for (auto iter = score.begin(); iter != score.end();iter++) {
		cout << iter->first << " ";
		cout << iter->second[0] << endl;

	}
	return score[max].front();
}

int main() {

	string answer = solution({ "SI JAVA JAVASCRIPT SQL PYTHON C#", "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++", "HARDWARE C C++ PYTHON JAVA JAVASCRIPT", "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP", "GAME C++ C# JAVASCRIPT C JAVA" }, { "PYTHON", "C++", "SQL" }, { 7, 5, 5 });
	cout << answer;
	return 0;
}