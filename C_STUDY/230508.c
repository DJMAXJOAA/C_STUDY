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
//	printf("���� �Է� : ");
//	scanf("%d", &age);
//
//	//getchar() -> �ϳ��� ���� �о ��ȯ, ���� ����ֱ�
//
//	printf("�̸� �Է� : ");
//	gets(name);
//	printf("���� : %d, �̸� %s\n", age, name);
//
//	return 0;
//}

/* strcat �̾���̱� */
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

/* strlen �迭 ���� ���ϱ� */
//int main()
//{
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2���� ���� �̸� �Է� : ");
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
//	printf("�̸��� �� ������ : %s\n", resp);
//
//	return 0;
//}

/* strcmp ���ڿ� �� */
//int main()
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("������ ���߿� ������ ���� �̸� : ");
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

/* strcpy ���� ����� */
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

/* strcat ���� ����� */
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

/* strlen ���� ����� */
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

/* �������� */
//void assign10(void);
//void assign20(void);
//
//int a;
//
//int main()
//{
//	printf("�Լ� ȣ�� �� a �� : %d\n", a);
//	assign10();
//	assign20();
//
//	printf("�Լ� ȣ�� �� a�� : %d\n", a);
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

/* ���� ���� */
//void auto_func(void);
//void static_func(void);
//
//int main()
//{
//	int i;
//
//	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�\n");
//	for (int i = 0; i < 3; i++)
//	{
//		auto_func();
//	}
//	printf("���� ���� ����(static)�� ����� �Լ�\n");
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

/* ���� �����ؼ� �����ϴ� ��� */
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

/* �ּҸ� ���� */
//int* sum(int a, int b);
//
//int main()
//{
//	int* resp;
//
//	resp = sum(10, 20);
//	printf("�� ������ �� : %d\n", *resp);
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