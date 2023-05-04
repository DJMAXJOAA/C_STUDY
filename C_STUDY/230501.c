#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ±¸±¸´Ü */
//int main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//	
//	return 0;
//}

int main()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i%3 ==0)
		{
			continue;
		}
		sum += 1;
		printf("%d", i);
	}
}
