#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ������ �迭 : �л� 3���� �װ��� ������ ��� */
//int main()
//{
//	int score[3][4];
//	int total;
//	double avg;
//	int i, j;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("4������ ���� �Է� : ");
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		total = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("���� : %d, ��� : %.2lf\n", total, avg);
//	}
//	return 0;
//}

/* 2���� �迭 �ʱ�ȭ */
//int main()
//{
//	int num[6][4] =
//	{
//		{1,2,3,},
//		{5,6,},
//		{9,10,11,12}
//	};
//
//	int a[6] = { 1,2,3,4,5,6 };
//	int b[3][2] = {1,2,3,4,5,6};
//	int c[][4] = {1,2,3,4,5,6};
//}

/* 2���� char �迭 */
//int main()
//{
//	char animal[5][20];
//	int i;
//	int count;
//
//	count = sizeof(animal) / sizeof(animal[0]);
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		printf("%s ", animal[i]);
//	}
//	return 0;
//}

/* 3���� 2����, 3���л�, 4���� ���� */
//int main()
//{
//	int score[2][3][4] = {
//		{{72,80,95,60}, {68,98,83,90}, {75,72,84,90}},
//		{{66,85,90,88}, {95,92,88,95}, {43,72,56,75}}
//	};
//
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d�� ����...\n", i + 1);
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 4; k++)
//			{
//				printf("%5d", score[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/* 2���� �迭ó�� ����ϴ� ������ �迭 */
int main()
{
	char* pary[5] = { "dog", "elephant", "horse", "tiger", "lion" };
	char* animal[5][20] = {"dog", "elephant", "horse", "tiger", "lion"};

	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1,ary2,ary3 };
	int i, j;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
	return 0;
}