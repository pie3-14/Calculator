#include <stdio.h>
#include <string.h>

//연산 헤더파일
#include "add.h"
#include "minus.h"
#include "multiply.h"
#include "division.h"

int main(void) {
	// 연산자와 피연산자 입력에 쓰는 변수
	char operator[10];
	int num1, num2;
	
	printf("**********Simple Calculator**********\n");
	while (1) {
		printf(">>");
		scanf("%s %d %d", &operator, &num1, &num2 );// 연산자 피연산자를 입력받아 변수에 저장
		if (strcmp(operator, "plus") == 0) { // 만약 연산자 변수 값이 plus라면
			printf("result : %d \n", Plus(num1, num2));
		} else if (strcmp(operator, "minus") == 0) { // 만약 연산자 변수 값이 minus라면
			printf("result : %d \n", Minus(num1, num2)); 
		} else if (strcmp(operator, "multiply") == 0) { // 만약 연산자 변수 값이 multiply라면
			printf("result : %d \n", Multiply(num1, num2));
		} else if (strcmp(operator, "division \n") == 0) { // 만약 연산자 변수 값이 division이라면
			printf("result : %lf", Division(num1, num2));
		} else { // 아무것도 아니면
			printf("<연산자> <피연산자1> <피연산자2>\n");
			printf("지원 연산자:\n");
			printf("	plus		더하기\n");
			printf("	minus		빼기\n");
			printf("	multiply	곱하기\n");
			printf("	division	나누기\n");
			printf("*주의: 모든 피연산자는 정수로 입력해야 합니다!\n");
			return 0;
		}
	}

	return 0;
}
