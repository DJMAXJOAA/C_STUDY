#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �迭 ���� */
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
//	printf("%d\n", ary[4]);	// 4��°�� �����Ⱚ(�ʱ�ȭx)
//   
//	return 0;
//}

/* �ݺ��� �迭 */
//int main(void)
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//
//	int size = sizeof(score) / sizeof(score[0]);	// ����ó��
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
//	printf("��� : %.1f\n", avg);
//
//	return 0;
//}

/* ���ڿ� �迭 */
//int main()
//{
//	char str[80] = "applejame";
//
//	printf("%s\n", str);
//
//	scanf("%s", str);	// �ƿ� �ʱ�ȭ�ȴ�
//
//	printf("%s\n", str);
//
//	return 0;
//}

/* ���ڿ� ���� */
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

/* ���ڿ� ���� gets, puts */
//int main()
//{
//	char str[80];
//
//	while (1)
//	{
//		printf("���ڿ� �Է� : ");
//		gets(str);
//		puts("�Էµ� ���ڿ� : ");
//		puts(str);
//
//		printf("\n");
//	}
//
//	return 0;
//}

/* �� ���ڰ� ������ */
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

/* ������ �ּ���� */
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

/* ������ ���� */
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
//	printf("�� ������ �� : %d, %d\n", *pa, *pb);
//	printf("�� ������ �� : %d\n", *pt);
//	printf("�� ������ ��� : %.1f\n", *pg);
//
//	return 0;
//}

/* �����Ϳ� �ּҰ��� ũ�� */
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
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
//
//	printf("char �������� ũ�� : %d\n", sizeof(pc));
//	printf("int �������� ũ�� : %d\n", sizeof(pi));
//	printf("double �������� ũ�� : %d\n", sizeof(pd));
//
//	printf("char �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
//	printf("int �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
//	printf("double �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
//
//	return 0;
//}

int main()
{

	return 0;
}