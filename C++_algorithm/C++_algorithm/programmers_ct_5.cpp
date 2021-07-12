#include <bits/stdc++.h>

using namespace std;
//���� �Ǵ� �Լ�
bool isChar(char c) {
	if (c >= 'a' && c <= 'z') {
		return true;
	}
	return false;
}

//if�� 0�̸� ���� �������� ���� �� 
int main(string str1,string str2)
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int answer = 0;

	//2���ھ� ��� ������ ����
	vector<string> v1, v2;

	//������ ����, ������ ���� ����
	int bunja = 0;
	int bunmo = 0;

	//�빮�� -> �ҹ��� ��ȯ
	for (int i = 0; i < str1.length(); i++) {
		str1[i] = tolower(str1[i]);
	}
	for (int i = 0; i < str2.length(); i++) {
		str2[i] = tolower(str2[i]);
	}

	//���ڿ����� ���ڸ� 2���ھ� �߶� ���Ϳ� ����
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

	//������ ���� ã��
	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); j++) {

			//���� ���Ұ� �ִٸ�, ������ ���� + 1
			if (v1[i] == v2[j]) {

				bunja++;

				//�ش� ���Ҹ� �ٽ� �� �� ������ ����
				v2[j] = "#";

				break;
			}
		}
	}

	//��� ���
	bunmo = v1.size() + v2.size() - bunja;

	if (bunmo == 0) {
		answer = 65536;
	}
	else {
		answer = bunja * 65536 / bunmo;
	}

	//��� ��ȯ
	return answer;
}


/*
String ���� STL ���� 

size() = length() 
substr(n,m): n���ͽ��� m��ŭ �ڸ��� 
replace(n,m,k): n���ͽ����ؼ� m��ŭ�� �ܾ k�� ��ġ�ϱ� 
tolower() :�ҹ��ڷ� 
toupper() : �빮�ڷ� 

find() : ���������� 0�̻��� ����, ���� ������ -1�� �����Ѵ�. 
��� -1 �� ���� �Է��ص� �Ǵµ� string:npos �� ����Ͽ��� ���Ͽ��� �ȴ�. 
npos�� ���ǰ��̸� �ش� ������ ���� ���ٶ�� �ؼ��� �� �ִ�.

*/