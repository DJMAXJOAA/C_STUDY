#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* scanf getchar */
//int main()
//{
//	int age;
//	char name[20];
//
//	printf("나이 입력 : ");
//	scanf("%d", &age);
//
//	//getchar() -> 하나의 문자 읽어서 반환, 버퍼 비워주기
//
//	printf("이름 입력 : ");
//	gets(name);
//	printf("나이 : %d, 이름 %s\n", age, name);
//
//	return 0;
//}

/* strcat 이어붙이기 */
//int main()
//{
//	char str[80] = "straw";
//
//	strcat(str, "berry");
//	printf("%s\n", str);
//
//	strncat(str, "piece", 3);
//	printf("%s\n", str);
//
//	return 0;
//}

/* strlen 배열 길이 구하기 */
//int main()
//{
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2개의 과일 이름 입력 : ");
//	scanf("%s%s", str1, str2);
//
//	if (strlen(str1) > strlen(str2))
//	{
//		resp = str1;
//	}
//	else
//	{
//		resp = str2;
//	}
//
//	printf("이름이 긴 과일은 : %s\n", resp);
//
//	return 0;
//}

/* strcmp 문자열 비교 */
//int main()
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//	if (strcmp(str1, str2) > 0)
//	{
//		printf("%s\n", str1);
//	}
//	else
//	{
//		printf("%s\n", str2);
//	}
//	return 0;
//}

/* strcpy 직접 만들기 */
//char* my_strcpy(char* pd, char* ps);
//
//int main()
//{
//	char str[80] = "strawberry";
//
//	printf("%s\n", str);
//	my_strcpy(str, "apple");
//	printf("%s\n", str);
//
//	printf("%s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps)
//{
//	char* po = pd;
//
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	return po;
//}

/* strcat 직접 만들기 */
//char* my_strcat(char* pd, char* ps);
//
//int main()
//{
//	char str[80] = "strawberry";
//
//	printf("%s\n", str);
//	my_strcat(str, "apple");
//	printf("%s\n", str);
//
//	printf("%s\n", my_strcat(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcat(char* pd, char* ps)
//{
//	char* po = pd;
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	return po;
//}

/* strlen 직접 만들기 */
//char* my_strlen(char* pd);
//
//int main()
//{
//	char str[80] = "strawberry";
//
//	printf("%s\n", str);
//	int length = my_strlen(str);
//	printf("%d\n", length);
//
//	return 0;
//}
//
//char* my_strlen(char* pd)
//{
//	char* po = pd;
//	int cnt = 0;
//
//	while (*pd != '\0')
//	{
//		cnt++;
//		pd++;
//	}
//	
//	return cnt;
//}

/* 전역변수 */
//void assign10(void);
//void assign20(void);
//
//int a;
//
//int main()
//{
//	printf("함수 호출 전 a 값 : %d\n", a);
//	assign10();
//	assign20();
//
//	printf("함수 호출 후 a값 : %d\n", a);
//	return 0;
//}
//
//void assign10(void)
//{
//	a = 10;
//}
//
//void assign20(void)
//{
//	int a;
//	a = 20;
//}

/* 정적 변수 */
//void auto_func(void);
//void static_func(void);
//
//int main()
//{
//	int i;
//
//	printf("일반 지역 변수(auto)를 사용한 함수\n");
//	for (int i = 0; i < 3; i++)
//	{
//		auto_func();
//	}
//	printf("정적 지역 변수(static)를 사용한 함수\n");
//	for (int i = 0; i < 3; i++)
//	{
//		static_func();
//	}
//	return 0;
//}
//void auto_func(void)
//{
//	auto int a = 0;
//
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func(void)
//{
//	static int a;
//
//	a++;
//	printf("%d\n", a);
//}

/* 값을 복사해서 전달하는 방법 */
//void add_ten(int a);
//
//int main()
//{
//	int a = 10;
//
//	add_ten(a);
//	printf("a : %d\n", a);
//
//	return 0;
//}
//
//void add_ten(int a)
//{
//	a = a + 10;
//}

/* 주소를 전달 */
//int* sum(int a, int b);
//
//int main()
//{
//	int* resp;
//
//	resp = sum(10, 20);
//	printf("두 정수의 합 : %d\n", *resp);
//
//	return 0;
//}
//
//int* sum(int a, int b)
//{
//	static int res;
//	 
//
//	res = a + b;
//
//	return &res;
//}