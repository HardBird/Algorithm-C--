#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 

string solution(vector<vector<int>> scores) {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string answer = "";
	int tot = 0;
	double tot_avg = 0;
	int cnt_score = 0, n = scores.size();
	int max = 0, min = 999, max_index = 0 , min_index = 0;
	int temp = 0, temp_max=0 , temp_min=0;
	for (int i = 0; i < scores.size(); i++)
	{
		tot = 0;
		tot_avg = 0;

		max_index = 0, temp_max = i;
		min_index = 0, temp_min = i;
		int max_count = 0, min_count = 0;
		max = 0;
		min = 999;
		temp = scores[i][i];
		

		cnt_score = (int)scores.size();
		for (int j = 0; j < scores.size(); j++)
		{
			if (scores[j][i] < scores[i][i]) max_count++;
			if (scores[j][i] > scores[i][i]) min_count++;
			
				tot += scores[j][i];
			
			cout << "temp" << temp_min << " " << temp_max << " " << "change" << max_index << " " << min_index <<" " << "tot" << tot << endl;
		}
		if ((max_count == n - 1) || (min_count == n - 1))
		{
			cnt_score--;
			tot -= temp;
			cout << "result" << endl;
			cout << "temp" << temp_min << " " << temp_max << " " << "change" << max_index << " " << min_index << " " << "tot" << tot << endl;
		}
		cout << "=========" << endl;
		tot_avg = (double)tot / (double)cnt_score;
		if (tot_avg >= 90.0f) {
			answer += "A";
		}
		else if (tot_avg < 90.0f && tot_avg >= 80.0f)
		{
			answer += "B";
		}
		else if (tot_avg < 80.0f && tot_avg >= 70.0f)
		{
			answer += "C";
		}
		else if (tot_avg < 70.0f && tot_avg >= 50.0f)
		{
			answer += "D";
		}
		else if (tot_avg < 50.0f)
		{
			answer += "F";
		}
	}
	cout << answer << endl;
	return answer;
}

int main()
{
	solution({ {100, 90, 98, 88, 65}, {50, 45, 99, 85, 77}, {47, 88, 95, 80, 67}, {61, 57, 100, 80, 65}, {24, 90, 94, 75, 65} });
	//solution({ {90,90,90,90},{90,90,90,90},{90,10,90,80},{90,10,90,100} });
	return 0;
}