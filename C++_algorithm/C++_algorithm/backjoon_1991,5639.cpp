#include <bits/stdc++.h>

using namespace std;

int a[50][2];

void preorder(int N) {
	if (N == -1) return;
	cout << (char)(N + 'A');
	preorder(a[N][0]);
	preorder(a[N][1]);
}

void inorder(int N) {
	if (N == -1) return;
	inorder(a[N][0]);
	cout << (char)(N + 'A');
	inorder(a[N][1]);
}

void postorder(int N) { // 5639문제는 후위순회만 사용하면된다. 
	if (N == -1) return;
	postorder(a[N][0]);
	postorder(a[N][1]);
	cout << (char)(N + 'A');
}

//if가 0이면 거짓 나머지는 참의 값 
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char x, y, z;
		cin >> x >> y >> z;		// 알파벳 입력
		x = x - 'A';		// 문자 -> 숫자 변환
		if (y == '.') {		// 입력이 .이면 그 자리에 -1 대입
			a[x][0] = -1;
		}
		else {
			a[x][0] = y - 'A';
		}
		if (z == '.') {
			a[x][1] = -1;
		}
		else {
			a[x][1] = z - 'A';
		}
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	return 0;
}

// -'A' , +'A'는 기존에 잇는 단어들을 정수형으로 변환 해줄수 있다.