#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* �迭������ �迭 ��� ����ϱ� */
//int main()
//{
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10;
//	*(ary + 1) = *(ary + 0) + 10;
//
//	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
//	scanf("%d", ary + 2);
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%5d", *(ary + i));
//	}
//	return 0;
//}

/* �迭�� ������ �ϴ� ������ */
//int main()
//{
//	int ary[3];
//	int* pa = ary;
//
//	*pa = 10;
//	*(pa + 1) = 20;
//	pa[2] = pa[0] + pa[1];
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%5d", pa[i]);
//	}
//
//	return 0;
//}

/* �迭�� ó���ϴ� �Լ� */
//void print_any(int* pa, int size);
//
//int main()
//{
//	int ary1[5] = { 10, 20, 30, 40, 50 };
//	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
//
//	print_any(ary1, 5);
//	printf("\n");
//	print_any(ary2, 7);
//	
//	return 0;
//}
//
//void print_any(int* pa, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//}

/* �迭�� ���� �Է��ϴ� �Լ� */
//void input_ary(double* pa, int size)
//{
//	int i;
//
//	printf("%d���� �Ǽ��� �Է� : ", size);
//	for (i = 0; i < size; i++)
//	{
//		/*scanf("%lf", pa + i);*/
//		scanf("%lf", &pa[i]);
//	}
//}
//
//double find_max(double* pa, int size)
//{
//	double max;
//	int i;
//
//	max = pa[0];
//	for (i = 0; i < size; i++)
//	{
//		if (pa[i] > max)
//		{
//			/*max = pa[i];*/
//			max = *(pa + i);
//		}
//	}
//	return max;
//}
//
//void output_ary(double* pa, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		/*printf("%.1lf ", pa[i]);*/
//		printf("%.1lf ", *(pa+i));
//	}
//}
//
//int main()
//{
//	double ary[5];
//	double max;
//	int size = sizeof(ary) / sizeof(ary[0]);
//
//	input_ary(ary, size);
//	max = find_max(ary, size);
//	printf("�ִ밪 : %.1lf\n", max);
//	output_ary(ary, size);
//	return 0;
//}

/* scanf 1 */
//int main()
//{
//	while (1)
//	{
//		char ch1, ch2;
//
//		scanf("%c%c", &ch1, &ch2);
//		printf("[%c%c]\n\n", ch1, ch2);
//	}
//
//	return 0;
//}

/* scanf �Լ��� ���ڸ� �Է��ϴ� ���� */
//int main()
//{
//	char ch;
//	int i;
//
//	while (1)
//	{
//		scanf("%c", &ch);
//		if (ch == '\0')
//		{
//			break;
//		}
//		printf("%c", ch);
//	}
//	return 0;
//}

/* getchar �Լ��� ����� ���ڿ� �Է� */
//void my_gets(char* str, int size);
//
//int main()
//{
//	char str[7];
//
//	my_gets(str, sizeof(str));
//	printf("�Է��� ���ڿ� : %s\n", str);
//
//	return 0;
//}
//
//void my_gets(char* str, int size)
//{
//	int ch;
//
//	int i = 0;
//
//	ch = getchar();
//	while ((ch != '\n') && (i < size - 1))
//	{
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	str[i] = '\0';
//}

/* ���� ���� ����� */
int main()
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();		// �̺κ�
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}