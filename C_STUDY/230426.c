#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World! 1\n");
    printf("%s�� ���̴� %d�̴�. Ű�� %d�̴�.\n",
        // �����ݷ��� ���� �����ٴ� �ǹ�
        "ȫ�浿", 25, 180.3);
    printf("Goot\bd\t!\n");
    // \b �齺���̽�, �� ĭ ������ ���� goot�� t �ڸ��� d�� �����
    // \t ��Ű
    // \a �˶� �Ҹ�(������ �����Ҹ�)
    // \r �齺���̽�ó�� �Ǿ����� ���� ������
    printf("%d\n", 65);
    printf("Hello World! 2\n");
    system("Pause");

    /*
        �����ٿ� ���ļ�
        �ּ�
    */
    return 0;
}
