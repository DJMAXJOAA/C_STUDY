#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World! 1\n");
    printf("%s의 나이는 %d이다. 키는 %d이다.\n",
        // 세미콜론은 줄이 끝났다는 의미
        "홍길동", 25, 180.3);
    printf("Goot\bd\t!\n");
    // \b 백스페이스, 한 칸 전으로 가서 goot의 t 자리에 d로 덮어씌움
    // \t 탭키
    // \a 알람 소리(윈도우 오류소리)
    // \r 백스페이스처럼 맨앞으로 가서 덮어씌운다
    printf("%d\n", 65);
    printf("Hello World! 2\n");
    system("Pause");

    /*
        여러줄에 걸쳐서
        주석
    */
    return 0;
}
