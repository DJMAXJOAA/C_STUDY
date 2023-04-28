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
//	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
//	printf("총점 : %d\n", tot);
//	return 0;
//}

//int main(void)
//{
//	char grade;
//	char name[20];
//
//	printf("학점 입력 :");
//	scanf("%c", &grade);
//	printf("이름 입력 :");
//	scanf("%s", name);
//	printf("%s의 학점은 %c입니다.\n", name, grade);
//
//	return 0;
//
//}

//int main()
//{
//	char	alphabet;
//	int		year, month;	// 같은 자료형끼리는 콤마로 여러개 쓸 수 있다.
//	float	pi;
//	double	doublePI;	// float와 같은 실수형인데, 두배
//
//	alphabet = 'a';		// 'a'가 아닌 "a"로 하면 문자가 아닌 문자열이 되니까 꼭 구분하기
//	year = 2023;
//	pi = 3.14f;
//	doublePI = 3.14f;
//	month = 4;
//	year = month;
//
//	char ch1 = 'A';
//	char ch2 = 65;
//
//	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
//	printf("아스키코드 %d의 문자값 : %c\n", ch2, ch2);
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
//	// 표현이 제대로 되지 않는다
//
//	float ft = 1.234567890123456789;
//	double db = 1.234567890123456789;
//
//	printf("float형 변수의 값 : %.20f\n", ft);
//	printf("double형 변수의 값 : %.20f\n", db);
//
//	float f1 = 0.1;
//	printf("%.20f\n", f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1 + f1);
//	// 실수 0.1은 정확히 0.1이 아니다 (단위가 굉장히 커지면 정확히 그 값이 나오는건 아님)
//
//	char name[4] = "hong";
//	printf("%s\n", name);
//	// 배열의 크기를 +1이 아닌 딱맞추어서 선언하면 이상한 값이 들감 보이지않는 \0때문에
//
//	/*
//	char name[128] = "hong";
//	name = "gil"; 이런식으로 선언을 해주면 안댐
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
//	printf("학점 입력 :");
//	scanf("%c", &grade);
//	printf("이름 입력 :");
//	scanf("%s", name);
//
//	printf("%s의 학점은 %c입니다.\n", name, grade);
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
//	printf("두 과목의 점수 :");
//	scanf_s("%d %d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("평균 : %.1lf\n", avg);
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
//	// 산술 연산자
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
//	// 증감 연산자
//	int aa = 5;
//	int bb = 2;
//
//	printf("후위 연산%d, ", aa++);
//	printf("%d\n", aa);
//
//	printf("전위 연산%d, ", ++bb);
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

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d", pre, post);

	return 0;
}