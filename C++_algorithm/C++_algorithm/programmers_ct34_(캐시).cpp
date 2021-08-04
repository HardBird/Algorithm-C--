#include <bits/stdc++.h>

using namespace std;

//if가 0이면 거짓 나머지는 참의 값 

//https://j2wooooo.tistory.com/121 LRU 페이징 교체 알고리즘 개념을 다시잡고가자 ! 
int main(int cacheSize, vector<string> cities)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int answer = 0;

	//pop_front()를 사용하기 위해 deque를 사용
	deque<string> cache;

	for (int i = 0; i < cities.size(); i++) {

		//캐시에 넣어야 할 도시
		string city = cities[i];

		//대문자 -> 소문자 변환
		for (int j = 0; j < city.length(); j++) {
			city[j] = tolower(city[j]);
		}

		//캐시 hit, miss인지 판단
		bool hit = false;
		int index = 0;
		for (index = 0; index < cache.size(); index++) {
			if (cache[index] == city) {
				hit = true;
				break;
			}
		}

		//일단 cache 가장 뒤에 넣기(LRU 이므로)
		cache.push_back(city);

		//캐시 hit일 경우
		if (hit) {
			//캐시에 있는 기존 데이터 삭제
			cache.erase(cache.begin() + index);
			answer += 1;
		}
		//캐시 miss일 경우
		else {
			//캐시가 넘쳤을 경우, 맨 앞에 있는 가장 오래된 데이터 삭제
			if (cache.size() > cacheSize) {
				cache.pop_front();
			}
			answer += 5;
		}
	}

	//결과 반환
	return answer;
}