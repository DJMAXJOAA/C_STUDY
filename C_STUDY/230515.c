#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	FILE* fp;
//
//	fp = fopen("ab.txt", "w");
//	if (fp == NULL)
//	{
//		printf("���Ͽ��� ����\n");
//		return 1;
//	}
//
//	int ch;
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)	// -1
//		{
//			break;		// ������ �������̸�
//		}
//		putchar(ch);
//	}
//
//	printf("���� ���� ����\n");
//
//	char str[] = "banana";
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		fputs(str[i], fp);
//		i++;
//	}
//	fputc('\n', fp);
//
//	fclose(fp);
//	return 0;
//}

//int main()
//{
//	int ch;
//	while (1)
//	{
//		ch = fgetc(stdin);
//		if (ch == EOF)
//		{
//			break;
//		}
//
//		fputc(ch, stdout);
//	}
//}

//int main()
//{
//	FILE* fp;	 // ���� ������ ����
//	char str[] = "banana";	// ��� ���ڿ�
//	int i;
//
//	fp = fopen("b.txt", "w");		// ���� �������� ����
//	if (fp == NULL)					// ���� ���� Ȯ��
//	{
//		printf("������ ������ ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	i = 0;
//	while (str[i]  != '\0')
//	{
//		fputc(str[i], fp);
//		i++;
//	}
//	fputc('\n', fp);
//	fclose(fp);
//
//	return 0;
//}

/* ���� �� ���¿� �����尡 �ٸ� ���, �ؽ�Ʈ���� ���̳ʸ����� */
//int main()
//{
//	FILE* fp;
//	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wb");
//	for (int i = 0; i < 10; i++)
//	{
//		fputc(ary[i], fp);
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1)
//	{
//		res = fgetc(fp);
//		if (res == EOF) break;
//		printf("%d\n", res);
//	}
//	fclose(fp);
//
//	return 0;
//}

/* ������, fseek, rewind, feof �Լ�, a+���� ���ϳ��� ��� */
//int main()
//{
//	FILE* fp;
//	char str[20];
//	fp = fopen("a.txt", "a+");		// �б� ������ �߰� ���� ����
//	if (fp == NULL)
//	{
//		printf("������ ������ ���߽��ϴ�.\n");
//		return 1;
//	}
//	while (1)
//	{
//		printf("���� �̸� : ");
//		scanf("%s", str);
//		if (strcmp(str, "end") == 0)	// end �Է½� ����
//		{
//			break;
//		}
//		else if (strcmp(str, "list") == 0)
//		{
//			fseek(fp, 0, SEEK_SET);		// ������ ��ġ �����ڸ� �� ó������ �̵�
//			while (1)
//			{
//				fgets(str, sizeof(str), fp);	// ���� �̸� �д´�
//				if (feof(fp))	// ���� ������ ��� ������ ����
//				{
//					break;
//				}
//				printf("%s", str);		//���� ���� �̸� ���
//			}
//		}
//		else
//		{
//			fprintf(fp, "%s\n", str);
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}

/* ���� ���� ������ �Է��Ͽ� ���� ��� */
//int main()
//{
//	FILE* ifp, * ofp;	// ���� ������ ����
//	char str[80];		// �Է��� ���ڿ��� ������ �迭
//	char* res;		// fgets �Լ��� ��ȯ���� ������ ����
//
//	ifp = fopen("a.txt", "r");	// �Է� ������ �б� �������� ����
//	if (ifp == NULL)		// ���� ���� Ȯ��
//	{
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");	// ��� ������ �б� �������� ����
//	if (ofp == NULL)		// ���� ���� Ȯ��
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)		// ���ڿ��� �Է��ϰ� ����ϴ� ���� �ݺ�
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL)		// ��ȯ���� �� �����͸� �ݺ� ����
//		{
//			break;
//		}
//		str[strlen(str) - 1] = '\0';		// ���๮�� ����
//		fputs(str, ofp);
//		fputs(" ", ofp);
//	}
//	fclose(ifp);
//	fclose(ofp);		//����� ���� �ݱ�
//
//	return 0;
//}

/* �پ��� �ڷ����� ���Ŀ� �°� ����� */
//int main()
//{
//	FILE* ifp, * ofp;		//���������� ����
//	char name[20];
//	int kor, eng, math;
//	int total;
//	double avg;
//	int res;
//
//	ifp = fopen("a.txt", "r");		// �Է� ������ �б� �������� ����
//	if (ifp == NULL)		// ���� ���� Ȯ��
//	{
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
//		if (res == EOF)
//		{
//			break;
//		}
//		total = kor + eng + math;
//		avg = total / 3.0;
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
//	}
//	fclose(ifp);
//	fclose(ofp);
//
//	return 0;
//}

/* ���۸� ���������� ���� �߻��ϴ� ���� */
//int main()
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//
//	fscnaf(fp, "%d", &age);
//	fgets(name, sizeof(name), fp);
//
//	printf("���� : %d, �̸� : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}

int main()
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);
	return 0;
}