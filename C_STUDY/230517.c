#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �̹� ���ǵ� ��ũ�� */
//void func(void);
//
//int main()
//{
//	printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
//	printf("���ϸ� : %s\n", __FILE__);
//	printf("�Լ��� : %s\n", __FUNCTION__);
//	printf("���ȣ : %d\n", __LINE__);
//}

/* ��ũ�� ���� #, ## */
//#define EXPR(x) printf(#x " = %d\n", x)
//#define CAT(x, y) (x##y)
//
//int main()
//{
//	int a1, a2;
//	CAT(a, 1) = 10;
//	// CAT a2�� 20 ���� ( a�� 2�� �پ a2 )
//
//	CAT(a, 2) = 20;
//	// CAT a2�� 20 ���� ( a�� 2�� �پ a2 )
//
//	EXPR(a1 + a2);
//	EXPR(a2 - a1);
//
//	return 0;
//}

/* extern, static */
int input_data