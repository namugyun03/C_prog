#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int data = 100; //1���� ���� ���� ����
	int* ptrint = &data; //1���� ���� ������ ���� ����
	double a, b; //2���� ���� ���� ����
	double* pta = &a; //2���� ���� ������ ���� ����
	double*	ptb = &b; //2���� ���� ������ ���� ����


	printf("�й� : 20211223           �̸� : ������");

	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("1��)\n");

	printf("���� data�� ����� �ֱ����ġ�� �ּ� : %p\n", ptrint);
	printf("���� data�� ����� �� : %d\n\n", *ptrint);

	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("2��)\n");

	printf("�� �Ǽ� �Է� : ");
	scanf("%lf %lf", &a, &b);
	printf("%4.02lf + %4.02lf = %4.02lf\n", *pta, *ptb, *pta + *ptb);
	printf("%4.02lf - %4.02lf = %4.02lf\n", *pta, *ptb, *pta - *ptb);
	printf("%4.02lf * %4.02lf = %4.02lf\n", *pta, *ptb, *pta * *ptb);
	printf("%4.02lf / %4.02lf = %4.02lf\n", *pta, *ptb, *pta / *ptb);
}