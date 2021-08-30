#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k; //���� ����, ��ǥ��
vector<int> coins;
vector<int> dp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	coins.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		int input;
		cin >> input;
		coins[i] = input;
	}

	dp.resize(k + 1, 99999);

	sort(coins.begin(), coins.end());

	// �־��� ������ ���� �� �ִ� �ּ� ����� 1������. => �ʱ�ȭ
	for (int i = 1; i < coins.size(); i++) {
		dp[coins[i]] = 1;
	}

	for (int i = 1; i < coins.size(); i++) {
		for (int j = coins[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coins[i]] + 1);
		}
	}

	if (dp[k] == 99999)
		cout << -1 << '\n';
	else
		cout << dp[k] << '\n';



	return 0;
}