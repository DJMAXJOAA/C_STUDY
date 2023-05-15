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
//		printf("파일열기 실패\n");
//		return 1;
//	}
//
//	int ch;
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)	// -1
//		{
//			break;		// 파일이 마지막이면
//		}
//		putchar(ch);
//	}
//
//	printf("파일 열기 성공\n");
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
//	FILE* fp;	 // 파일 포인터 선언
//	char str[] = "banana";	// 출력 문자열
//	int i;
//
//	fp = fopen("b.txt", "w");		// 쓰기 전용으로 개방
//	if (fp == NULL)					// 파일 개방 확인
//	{
//		printf("파일을 만들지 못했습니다.\n");
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

/* 파일 의 형태와 개방모드가 다른 경우, 텍스트파일 바이너리파일 */
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

/* 개방모드, fseek, rewind, feof 함수, a+모드로 파일내용 출력 */
//int main()
//{
//	FILE* fp;
//	char str[20];
//	fp = fopen("a.txt", "a+");		// 읽기 가능한 추가 모드로 개방
//	if (fp == NULL)
//	{
//		printf("파일을 만들지 못했습니다.\n");
//		return 1;
//	}
//	while (1)
//	{
//		printf("과일 이름 : ");
//		scanf("%s", str);
//		if (strcmp(str, "end") == 0)	// end 입력시 종료
//		{
//			break;
//		}
//		else if (strcmp(str, "list") == 0)
//		{
//			fseek(fp, 0, SEEK_SET);		// 버퍼의 위치 지시자를 맨 처음으로 이동
//			while (1)
//			{
//				fgets(str, sizeof(str), fp);	// 과일 이름 읽는다
//				if (feof(fp))	// 파일 내용을 모두 읽으면 종료
//				{
//					break;
//				}
//				printf("%s", str);		//읽은 과일 이름 출력
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

/* 여러 줄의 문장을 입력하여 한줄 출력 */
//int main()
//{
//	FILE* ifp, * ofp;	// 파일 포인터 선언
//	char str[80];		// 입력한 문자열을 저장할 배열
//	char* res;		// fgets 함수의 반환값을 저장할 변수
//
//	ifp = fopen("a.txt", "r");	// 입력 파일을 읽기 전용으로 개방
//	if (ifp == NULL)		// 개방 여부 확인
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");	// 출력 파일을 읽기 전용으로 개방
//	if (ofp == NULL)		// 개방 여부 확인
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	while (1)		// 문자열을 입력하고 출력하는 과정 반복
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL)		// 반환값이 널 포인터면 반복 종료
//		{
//			break;
//		}
//		str[strlen(str) - 1] = '\0';		// 개행문자 제거
//		fputs(str, ofp);
//		fputs(" ", ofp);
//	}
//	fclose(ifp);
//	fclose(ofp);		//입출력 파일 닫기
//
//	return 0;
//}

/* 다양한 자료형을 형식에 맞게 입출력 */
//int main()
//{
//	FILE* ifp, * ofp;		//파일포인터 선언
//	char name[20];
//	int kor, eng, math;
//	int total;
//	double avg;
//	int res;
//
//	ifp = fopen("a.txt", "r");		// 입력 파일을 읽기 전용으로 개방
//	if (ifp == NULL)		// 개방 여부 확인
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
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

/* 버퍼를 공유함으로 인해 발생하는 문제 */
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
//	printf("나이 : %d, 이름 : %s", age, name);
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