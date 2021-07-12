#include <bits/stdc++.h>

using namespace std;
//문자 판단 함수
bool isChar(char c) {
	if (c >= 'a' && c <= 'z') {
		return true;
	}
	return false;
}

//if가 0이면 거짓 나머지는 참의 값 
int main(string str1,string str2)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;

	//2글자씩 끊어서 저장할 벡터
	vector<string> v1, v2;

	//교집합 개수, 합집합 개수 변수
	int bunja = 0;
	int bunmo = 0;

	//대문자 -> 소문자 변환
	for (int i = 0; i < str1.length(); i++) {
		str1[i] = tolower(str1[i]);
	}
	for (int i = 0; i < str2.length(); i++) {
		str2[i] = tolower(str2[i]);
	}

	//문자열에서 문자만 2글자씩 잘라 벡터에 저장
	for (int i = 0; i < str1.length() - 1; i++) {
		if (isChar(str1[i]) && isChar(str1[i + 1])) {
			v1.push_back(str1.substr(i, 2));
		}
	}
	for (int i = 0; i < str2.length() - 1; i++) {
		if (isChar(str2[i]) && isChar(str2[i + 1])) {
			v2.push_back(str2.substr(i, 2));
		}
	}

	//교집합 개수 찾기
	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); j++) {

			//같은 원소가 있다면, 교집합 개수 + 1
			if (v1[i] == v2[j]) {

				bunja++;

				//해당 원소를 다시 셀 수 없도록 맵핑
				v2[j] = "#";

				break;
			}
		}
	}

	//결과 계산
	bunmo = v1.size() + v2.size() - bunja;

	if (bunmo == 0) {
		answer = 65536;
	}
	else {
		answer = bunja * 65536 / bunmo;
	}

	//결과 반환
	return answer;
}


/*
String 관련 STL 정리 

size() = length() 
substr(n,m): n부터시작 m만큼 자르기 
replace(n,m,k): n부터시작해서 m만큼의 단어를 k로 대치하기 
tolower() :소문자로 
toupper() : 대문자로 

find() : 값이있으면 0이상의 값을, 값이 없으면 -1을 리턴한다. 
사실 -1 의 값을 입력해도 되는데 string:npos 를 사용하여서 비교하여도 된다. 
npos가 참의값이면 해당 변수는 값이 없다라고 해석할 수 있다.

*/