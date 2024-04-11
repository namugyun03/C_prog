#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int data = 100; //1번을 위한 변수 선언
	int* ptrint = &data; //1번을 위한 포인터 변수 선언
	double a, b; //2번을 위한 변수 선언
	double* pta = &a; //2번을 위한 포인터 변수 선언
	double*	ptb = &b; //2번을 위한 포인터 변수 선언


	printf("학번 : 20211223           이름 : 남기현");

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("1번)\n");

	printf("변수 data가 저장된 주기억장치의 주소 : %p\n", ptrint);
	printf("변수 data에 저장된 값 : %d\n\n", *ptrint);

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("2번)\n");

	printf("두 실수 입력 : ");
	scanf("%lf %lf", &a, &b);
	printf("%4.02lf + %4.02lf = %4.02lf\n", *pta, *ptb, *pta + *ptb);
	printf("%4.02lf - %4.02lf = %4.02lf\n", *pta, *ptb, *pta - *ptb);
	printf("%4.02lf * %4.02lf = %4.02lf\n", *pta, *ptb, *pta * *ptb);
	printf("%4.02lf / %4.02lf = %4.02lf\n", *pta, *ptb, *pta / *ptb);
}