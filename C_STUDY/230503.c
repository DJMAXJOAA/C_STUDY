#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* �Ҽ� ���� */
//int sum(int x, int y);
//
//int main()
//{
//	int x = 10, y = 20;
//	int s = 0;
//	s = sum(x, y); // x, y �̸� �� ��Ī������ �ʿ� ��
//	printf("%d\n", s);
//
//	s = sum(x/3, y);
//	printf("%d\n", s);
//	// �Լ� �ȿ� ���� ������ ���ĵ� ����
//	// �Լ� �ȿ� �ٸ� �Լ��� ���� �ȴ�
//	
//	return 0;
//}
//
//int sum(int x, int y)
//{
//	int result = x + y;
//	return result;
//}

/* ���� ���� */
//int get_num(void)
//{
//	int num;
//	printf("��� �Է� : ");
//	scanf("%d", &num);
//	while (num < 0)
//	{
//		printf("����� �ٽ� �Է����ּ��� : ");
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

/* ��� �Լ� ���� */
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