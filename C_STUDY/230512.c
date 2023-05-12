#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 동적할당 문자열 */
//int main()
//{
//	char temp[80];
//	char* str[3] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("문자열을 입력하세요 : ");
//		gets(temp);
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		if (str[i] == NULL)
//		{
//			exit(1); // or break;
//		}
//		strcpy(str[i], temp);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		free(str[i]);
//	}
//
//	return 0;
//}

/* 동적할당 문자열 함수 */
//void print_str(char** ps);
//
//int main()
//{
//	char temp[80];
//	char* str[21] = { 0 };
//
//	int i = 0;
//
//	while (i < 20)
//	{
//		printf("문자열을 입력하세요 : ");
//		gets(temp);
//		if (strcmp(temp, "end") == 0) break;
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		if (str[i] == NULL)
//		{
//			exit(1);
//		}
//		strcpy(str[i], temp);
//		i++;
//	}
//	print_str(str);
//
//	for (int i = 0; str[i] != NULL; i++)
//	{
//		free(str[i]);
//	}
//
//	return 0;
//}
//
//void print_str(char** ps)
//{
//	while (*ps != NULL)
//	{
//		printf("%s\n", *ps);
//		ps++;
//	}
//}

/* int 명령행 인수 */
//int main(int argc, char** argv)
//{
//	int i;
//	printf("\n");
//	for ( i = 0; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//	
//}

/* 구조체 */
//struct student
//{
//	int num;
//	double grade;
//};
//
//int main()
//{
//	struct student s1;
//
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("%d\n", s1.num);
//	printf("%.1lf\n", s1.grade);
//
//	return 0;
//}

/* 구조체의 멤버로 다른 구조체 사용하기 */
//struct profile
//{
//	int age;
//	double height;
//};
//
//struct student
//{
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main()
//{
//	struct student yuni;
//
//	yuni.pf.age = 17;
//	yuni.pf.height = 164.5;
//	yuni.id = 315;
//	yuni.grade = 4.3;
//
//	printf("나이 : %d\n", yuni.pf.age);
//	printf("키 : %.1lf\n", yuni.pf.height);
//	printf("학번 : %d\n", yuni.id);
//	printf("학점 : %.1f\n", yuni.grade);
//
//	return 0;
//}

/* 구조체 배열 입력받기 */
//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//int main()
//{
//	struct address list[5] = {0};
//	struct address* p_ad = list;
//	for (int i = 0; i < 2; i++)
//	{
//		scanf("%s", &(p_ad+i)->name);
//		scanf("%d", &(p_ad+i)->age);
//		scanf("%s", &list[i].tel);
//		scanf("%s", &list[i].addr);
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//	return 0;
//}

/* 자기 참조 구조체 */
//struct list
//{
//	int num;
//	struct list* next;	 // 자기 자신을 멤버로 사용한다
//						// 배열은 할당되어있는 공간만
//};
//
//int main()
//{
//	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30,0 };
//	struct list* head = &a, * current;
//
//	a.next = &b;
//	b.next = &c;
//	current = &a;
//	while (current != NULL)
//	{
//		printf("%d\n", current->num);
//		current = current->next; // 조건 만족까지 다음으로, 연속되지 않아도 ㄱㅊ
//	}
//
//	return 0;
//}

/* 열거형 */
//enum season { SPRING, SUMMER, FALL, WINTER };
//
//int main()
//{
//	enum season ss;
//	printf("%d\n", SPRING);
//	printf("%d\n", SUMMER);
//	printf("%d\n", FALL);
//	printf("%d\n", WINTER);
//
//
//	return 0;
//}

/* 링크드 리스트 (자료구조) 연습 */
typedef struct node Node;

struct node
{
	int data;
	struct node *next;
};

Node* head;

int main()
{

}

void init()	// 1. 연결 초기화
{
	head = NULL;
}

void insert(int data)
{
	Node* ptr;
	Node* newNode = (Node*)malloc(sizeof(Node));
	// new noed를 할당시킨다
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL) // 아예 연결X (처음 추가하는거)
	{
		head = newNode;
	}
	else
	{
		if (head->data > newNode->data) // 데이터가 더 적으면
		{
			newNode->next = head; // 원래 헤더가 포인터 쏘던 값을 next
			head = newNode; // 헤더를 뉴노드로 포인터쏨
		}
	}
}