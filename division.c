#include "division.h"

float Division(int A, int B) {
	float result;
	// 피연산자가 0이라면
	if (B == 0 ) {
		return -1;
	}
	result = A / B;

	return result;
}
