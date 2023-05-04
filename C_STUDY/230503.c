#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* 소수 개념 */
//int sum(int x, int y);
//
//int main()
//{
//	int x = 10, y = 20;
//	int s = 0;
//	s = sum(x, y); // x, y 이름 꼭 매칭시켜줄 필요 ㄴ
//	printf("%d\n", s);
//
//	s = sum(x/3, y);
//	printf("%d\n", s);
//	// 함수 안에 들어가는 변수에 수식도 가능
//	// 함수 안에 다른 함수가 들어가도 된다
//	
//	return 0;
//}
//
//int sum(int x, int y)
//{
//	int result = x + y;
//	return result;
//}

/* 음수 대응 */
//int get_num(void)
//{
//	int num;
//	printf("양수 입력 : ");
//	scanf("%d", &num);
//	while (num < 0)
//	{
//		printf("양수로 다시 입력해주세요 : ");
//		scanf("%d", &num);
//	}
//	return num;
//}

//void print_line(void)
//{
//	for (int i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}

/* 재귀 함수 예시 */
//int main()
//{
//	Self();
//	return 0;
//}
//
//void Self(void)
//{
//	printf("SS");
//	Self();
//}

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
	printf("asdf\n");
}