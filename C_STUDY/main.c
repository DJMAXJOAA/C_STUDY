#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main()
{
	struct vision robot;

	printf("�÷� : ");
	scnaf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1f , %.1f\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{

	return robot;
}