#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 
int main(int bridge_length, int weight, vector<int> truck_weights)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0, currentWeight = 0;
	queue<int> count, bridgeOn;
	while (true) {
		int size = bridgeOn.size();
		for (int i = 0; i < size; i++) {
			int length = bridgeOn.front();
			bridgeOn.pop();
			if (length <= 1) {
				currentWeight -= count.front();
				count.pop();
				continue;
			}
			bridgeOn.push(length - 1);
		}
		if (truck_weights.size() > 0 && currentWeight + truck_weights.at(0) <= weight) {
			count.push(truck_weights.at(0));
			currentWeight += truck_weights.at(0);
			bridgeOn.push(bridge_length);
			truck_weights.erase(truck_weights.begin());
		}
		answer++;
		if (truck_weights.size() == 0 && count.size() == 0)
			break;
	}
	return answer;
}