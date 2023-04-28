#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void)
//{
//	int a = 10;
//	double b = 3.4;
//
//	printf("int 형 변수의 크기 : %d\n", sizeof(a));
//	printf("double 형 변수의 크기: %d\n", sizeof(a));
//	printf("정수형 상수의 크기 : %d\n", sizeof(a));
//	printf("수식의 결괏값 크기 : %d\n", sizeof(a));
//	printf("char 자료형의 크기 : %d\n", sizeof(a));
//
//	return 0;
//}

//int main(void)
//{
//	int a = 10, b = 20;
//	int res = 2;
//
//	a += 20;
//	res *= b + 10;
//
//	printf("a = %d, b = %d\n", a, b);
//	printf("res = %d\n", res);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 12;
//
//	printf("a & b : %d\n", a & b);
//	printf("a ^ b : %d\n", a ^ b);
//	printf("a | b : %d\n", a | b);
//	printf("~a : %d\n", ~a);
//	printf("a << 1 : %d\n", a << 1);
//	printf("a >> 1 : %d\n", a >> 2);
//
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = 0;
//
//	if (a>10)
//	{
//		b = a;
//	}
//
//	printf("a : %d, b : %d\n", a, b);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//
//	if (a>=0)
//	{
//		a = 1;
//	}
//	else
//	{
//		a = -1;
//	}
//
//	printf("a : %d\n", a);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 0, b = 0;
//
//	if (a > 0)
//	{
//		b = 1;
//	}
//	else if (a == 0)
//	{
//		b = 2;
//	}
//	else
//	{
//		b = 3;
//	}
//
//	printf("b = %d\n", b);
//	return 0;
//}

/* 145p switch ~ case문 */
//int main()
//{
//	int rank = 1, m = 0;
//
//	switch (rank)
//	{
//	case 1:
//		m = 300;
//		break;
//	case 2:
//		m += 200;
//		break;
//	case 3:
//		m = 100;
//		break;
//	case 4:
//		m = 0;
//		break;
//	default:
//		m = 10;
//		break;
//	}
//	printf("m : %d\n", m);
//
//	return 0;
//}

/* 155p while, for 반복문 */
//int main()
//{
//	int a = 1;
//
//	while (a < 10)
//	{
//		printf("%d\n", a);
//		a *= 2;
//	}
//
//	for (int a = 1; a < 10; a *= 2)
//	{
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

/* 161p do while 반복문 */
int main()
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10); printf("a : %d\n", a);

	return 0;
}