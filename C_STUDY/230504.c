#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 배열 연습 */
//int main()
//{
//	int ary[5];
//	
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//
//	int score[] = { 1,2,3,4,5,6 };
//	double ds[4] = { 0.0, 1 };
//	char str[5] = { 'a', 'p', 'p', 'l', 'e' };
//
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);	// 4번째는 쓰레기값(초기화x)
//   
//	return 0;
//}

/* 반복문 배열 */
//int main(void)
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//
//	int size = sizeof(score) / sizeof(score[0]);	// 예외처리
//	printf("%d\n", size);
//
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < size; i++)
//	{
//		total += score[i];
//	}
//	avg = total / 5.0;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("평균 : %.1f\n", avg);
//
//	return 0;
//}

/* 문자열 배열 */
//int main()
//{
//	char str[80] = "applejame";
//
//	printf("%s\n", str);
//
//	scanf("%s", str);	// 아예 초기화된다
//
//	printf("%s\n", str);
//
//	return 0;
//}

/* 문자열 복사 */
//int main()
//{
//	char str1[6] = "apple";
//	char str2[6]; 
//
//	strcpy(str2, str1);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	return 0;
//}

/* 문자열 저장 gets, puts */
//int main()
//{
//	char str[80];
//
//	while (1)
//	{
//		printf("문자열 입력 : ");
//		gets(str);
//		puts("입력된 문자열 : ");
//		puts(str);
//
//		printf("\n");
//	}
//
//	return 0;
//}

/* 널 문자가 없으면 */
//int main()
//{
//	char str[5];
//
//	str[0] = '0';
//	str[1] = 'K';
//	printf("%s\n", str);
//
//	return 0;
//}

/* 포인터 주소출력 */
//int main()
//{
//	int a = 0;
//	int* pA;
//	int* pB;
//
//	pA = &a;
//
//	printf("%d\n", *pA);	// *pA == a
//	printf("%d\n", pA);
//
//	//scanf("%d", &a);
//	scanf("%d", pA);
//	printf("%d\n", a);	// 
//
//	return 0;
//}

/* 포인터 예제 */
//int main()
//{
//	int a = 10, b = 15, total;
//	double avg;
//
//	int* pa, * pb;
//	int* pt = &total;
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//	printf("두 정수의 합 : %d\n", *pt);
//	printf("두 정수의 평균 : %.1f\n", *pg);
//
//	return 0;
//}

/* 포인터와 주소값의 크기 */
//int main()
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
//
//	return 0;
//}

int main()
{

	return 0;
}