#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void)
//{
//	int kor = 70;;
//	int eng = 80;
//	int mat = 90;
//	int tot = 0;
//
//	tot = kor + eng + mat;
//	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
//	printf("���� : %d\n", tot);
//	return 0;
//}

//int main(void)
//{
//	char grade;
//	char name[20];
//
//	printf("���� �Է� :");
//	scanf("%c", &grade);
//	printf("�̸� �Է� :");
//	scanf("%s", name);
//	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
//
//	return 0;
//
//}

//int main()
//{
//	char	alphabet;
//	int		year, month;	// ���� �ڷ��������� �޸��� ������ �� �� �ִ�.
//	float	pi;
//	double	doublePI;	// float�� ���� �Ǽ����ε�, �ι�
//
//	alphabet = 'a';		// 'a'�� �ƴ� "a"�� �ϸ� ���ڰ� �ƴ� ���ڿ��� �Ǵϱ� �� �����ϱ�
//	year = 2023;
//	pi = 3.14f;
//	doublePI = 3.14f;
//	month = 4;
//	year = month;
//
//	char ch1 = 'A';
//	char ch2 = 65;
//
//	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
//	printf("�ƽ�Ű�ڵ� %d�� ���ڰ� : %c\n", ch2, ch2);
//
//	short sh = 61000;
//	printf("%d\n", sizeof(sh));
//
//
//	unsigned int a;
//
//	a = 4294967295;
//	printf("%d\n", a);
//	a = -1;
//	printf("%u\n", a);
//	// ǥ���� ����� ���� �ʴ´�
//
//	float ft = 1.234567890123456789;
//	double db = 1.234567890123456789;
//
//	printf("float�� ������ �� : %.20f\n", ft);
//	printf("double�� ������ �� : %.20f\n", db);
//
//	float f1 = 0.1;
//	printf("%.20f\n", f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1);
//	// �Ǽ� 0.1�� ��Ȯ�� 0.1�� �ƴϴ� (������ ������ Ŀ���� ��Ȯ�� �� ���� �����°� �ƴ�)
//
//	char name[4] = "hong";
//	printf("%s\n", name);
//	// �迭�� ũ�⸦ +1�� �ƴ� �����߾ �����ϸ� �̻��� ���� �鰨 �������ʴ� \0������
//
//	/*
//	char name[128] = "hong";
//	name = "gil"; �̷������� ������ ���ָ� �ȴ�
//	*/
//
//	char grade;
//	char name2[20];
//
//	return 0;
//}

//int main()
//{
//	char grade;
//	char name[20];
//
//	printf("���� �Է� :");
//	scanf("%c", &grade);
//	printf("�̸� �Է� :");
//	scanf("%s", name);
//
//	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
//
//	return 0;
//}

//int main(void)
//{
//	double a = 4.0, b = 1.2;
//
//	printf("%.1f + %.1f = %.1lf\n", a, b, a + b);
//	printf("%.1f - %.1f = %.1lf\n", a, b, a - b);
//	printf("%.1f * %.1f = %.1lf\n", a, b, a * b);
//	printf("%.1f / %.1f = %.1lf\n", a, b, a / b);
//
//	return 0;
//}

//int main(void)
//{
//	int a, b, tot;
//	double avg;
//
//	printf("�� ������ ���� :");
//	scanf_s("%d %d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("��� : %.1lf\n", avg);
//
//	return 0;
//}

//int main(void)
//{
//	int kor = 3, eng = 5, mat = 3;
//	int credits = 0;
//	int res = 0;
//	double kscore = 3.8, escore = 4.4, mscore = 3.9;
//	double grade = 0;
//
//	credits = kor + eng + mat;
//	grade = (kscore + escore + mscore) / 3.0;
//
//}

//int main(void)
//{
//	// ��� ������
//	int a = 5.0 / 2;
//	int b = 5 / 2.0;
//
//	double a2 = 5.0 / 2;
//	double b2 = 5 / 2.0;
//
//	printf("a = %d / b = %d\n", a, b);
//	printf("a2 = %f / b2 = %f\n", a2, b2);
//	printf("a2 = %d / b2 = %d\n\n", a2, b2);
//
//	// ���� ������
//	int aa = 5;
//	int bb = 2;
//
//	printf("���� ����%d, ", aa++);
//	printf("%d\n", aa);
//
//	printf("���� ����%d, ", ++bb);
//	printf("%d\n", bb);
//
//
//	return 0;
//}

//int main(void)
//{
//	int a = 10, b = 20, c = 10;
//	int res;
//
//	res = (a > b);
//	printf("a > b : %d\n", res);
//
//	res = (a >= b);
//	printf("a >= b : %d\n", res);
//
//	res = (a < b);
//	printf("a < b : %d\n", res);
//
//	res = (a <= b);
//	printf("a <= b : %d\n", res);
//
//	res = (a <= c);
//	printf("a <= c : %d\n", res);
//
//	res = (a == b);
//	printf("a == b : %d\n", res);
//
//	res = (a != c);
//	printf("a != c : %d\n", res);
//
//	return 0;
//}

//int main(void)
//{
//	int a = 30;
//	int res;
//
//	res = (a > 10) && (a < 20);
//	printf("%d", res);
//
//	res = (a < 10) || (a > 20);
//	printf("%d", res);
//
//	res = !(a >= 30);
//	printf("%d", res);
//
//	return 0;
//}

int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������ : (++a) * 3 = %d, ������ : (b++) * 3 = %d", pre, post);

	return 0;
}