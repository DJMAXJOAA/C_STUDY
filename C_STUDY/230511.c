#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 이중포인터 활용 1 */
//void swap_ptr(char** ppa, char** ppb);
//int main()
//{
//	char* pa = "succes";
//	char* pb = "failure";
//
//	
//
//	printf("pa -> %p, pb -> %p\n", pa, pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa -> %p, pb -> %p\n", pa, pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//
//	return 0;
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char *pt;
//
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}

/* 이중포인터 활용 2 */
//void print_str(char** pps, int cnt);
//int main()
//{
//	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
//}

/* 2차원 배열과 배열 포인터 */
//int main()
//{
//	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int(*pa)[4];
//	int i, j;
//
//	pa = ary;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/* 이중포인터 연습 */
//int main()
//{
//	int a = 10;
//	int* pi;
//	int** ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//	printf("a%10d%10u\n", a, &a);
//	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("pi%10u%10u%10d%10u\n", ppi, &ppi, *ppi, **ppi);
//
//	return 0;
//}

/* 함수 포인터 개념 */
//int sum(int, int);
//int main()
//{
//	int a = 10, b = 20;
//	int result;
//	int (*pFunc)(int, int);
//	pFunc = sum;	//함수 포인터 -> sum을 가리킨다
//	result = pFunc(a, b);
//}
//
//int sum(int, int)
//{
//	return 0;
//}

/* 함수 포인터의 활용 */
//void func(int (*fp)(int, int));
//int sum(int a, int b);
//int mul(int a, int b);
//int Max(int a, int b);
//
//int main()
//{
//	int sel;
//
//	printf("01 두 정수의 합\n");
//	printf("02 두 정수의 곱\n");
//	printf("03 두 정수 중에서 큰 값 계산\n");
//	printf("원하는 연산을 선택하세요. : ");
//	scanf("%d", &sel);
//
//	switch (sel)
//	{
//	case 1: func(sum); break;
//	case 2: func(mul); break;
//	case 3: func(Max); break;
//	}
//	return 0;
//}
//
//void func(int(*fp)(int, int))
//{
//	int a, b;
//	int res;
//
//	printf("두 정수의 값을 입력하세요. : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("결과값은 %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return (a+b);
//}
//
//int mul(int a, int b)
//{
//	return (a*b);
//}
//
//int Max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}

//int main()
//{
//	int a = 10;
//	double b = 3.5;
//	void* vp;
//
//	vp = &a;
//	printf("a : %d\n", *(int*)vp);
//
//	vp = &b;
//	printf("b : %.1f\n", *(double*)vp);
//
//	return 0;
//}

/* 동적 할당 */
//int main()
//{
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다. \n");
//		exit(1);
//	}
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4;
//
//	free(pi);
//	free(pd);
//
//	return 0;
//}

/* calloc, realloc 기타 동적할당 함수 */
int main()
{
	int* pi;
	int size = 5;
	int count = 0;

	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0)
		{
			break;
		}
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}