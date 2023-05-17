#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 이미 정의된 매크로 */
//void func(void);
//
//int main()
//{
//	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
//	printf("파일명 : %s\n", __FILE__);
//	printf("함수명 : %s\n", __FUNCTION__);
//	printf("행번호 : %d\n", __LINE__);
//}

/* 매크로 연산 #, ## */
//#define EXPR(x) printf(#x " = %d\n", x)
//#define CAT(x, y) (x##y)
//
//int main()
//{
//	int a1, a2;
//	CAT(a, 1) = 10;
//	// CAT a2에 20 대입 ( a랑 2랑 붙어서 a2 )
//
//	CAT(a, 2) = 20;
//	// CAT a2에 20 대입 ( a랑 2랑 붙어서 a2 )
//
//	EXPR(a1 + a2);
//	EXPR(a2 - a1);
//
//	return 0;
//}

/* extern, static */
int input_data