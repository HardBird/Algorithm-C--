#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = 0;

	long long cand = sqrt(n);
	if (cand * cand == n) {
		answer = (cand + 1)  * (cand + 1);
	}
	else {
		answer = -1;
	}

	return answer;
}
