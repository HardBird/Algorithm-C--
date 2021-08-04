#include <bits/stdc++.h>

using namespace std;

//if�� 0�̸� ���� �������� ���� �� 

//https://j2wooooo.tistory.com/121 LRU ����¡ ��ü �˰��� ������ �ٽ������ ! 
int main(int cacheSize, vector<string> cities)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int answer = 0;

	//pop_front()�� ����ϱ� ���� deque�� ���
	deque<string> cache;

	for (int i = 0; i < cities.size(); i++) {

		//ĳ�ÿ� �־�� �� ����
		string city = cities[i];

		//�빮�� -> �ҹ��� ��ȯ
		for (int j = 0; j < city.length(); j++) {
			city[j] = tolower(city[j]);
		}

		//ĳ�� hit, miss���� �Ǵ�
		bool hit = false;
		int index = 0;
		for (index = 0; index < cache.size(); index++) {
			if (cache[index] == city) {
				hit = true;
				break;
			}
		}

		//�ϴ� cache ���� �ڿ� �ֱ�(LRU �̹Ƿ�)
		cache.push_back(city);

		//ĳ�� hit�� ���
		if (hit) {
			//ĳ�ÿ� �ִ� ���� ������ ����
			cache.erase(cache.begin() + index);
			answer += 1;
		}
		//ĳ�� miss�� ���
		else {
			//ĳ�ð� ������ ���, �� �տ� �ִ� ���� ������ ������ ����
			if (cache.size() > cacheSize) {
				cache.pop_front();
			}
			answer += 5;
		}
	}

	//��� ��ȯ
	return answer;
}