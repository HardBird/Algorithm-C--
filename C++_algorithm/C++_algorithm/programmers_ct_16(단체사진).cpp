#include <bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<string> kf(8);
	int result = 0;

	//A, C, F, J, M, N, R, T
	kf[0] = "A"; kf[1] = "C"; kf[2] = "F";
	kf[3] = "J"; kf[4] = "M";
	kf[5] = "N"; kf[6] = "R"; kf[7] = "T";

	int total = 0;;
	cin >> total;
	string arr = "";
	string* command = new string[total];
	for (int i = 0; i < 5; i++) {
		cin >> command[i];
	}
	do {
		arr = "";
		for (int i = 0; i < 8; i++)
			arr += kf[i];
		bool flag = true;
		for (int i = 0; i < 8; i++) {
			string fm = command[i].substr(0, 1);
			string em = command[i].substr(2, 1);
			string condition = command[i].substr(3, 1);
			int diff = atoi(command[i].substr(4, 1).c_str());
			int fmindex = arr.find(fm);
			int emindex = arr.find(em);
			if (condition == "=") {
				if (abs(emindex - fmindex) - 1 != diff)
					flag = false;
			}
			else if (condition == ">") {
				if (abs(emindex - fmindex) - 1 <= diff)
					flag = false;
			}
			else if (condition == "<") {
				if (abs(emindex - fmindex) - 1 >= diff)
					flag = false;
			}
		}
		if (flag) result++;
	} while (next_permutation(kf.begin(), kf.end()));
	cout << result << endl;
	return 0;
}