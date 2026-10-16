#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exercise_2_9()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	printf("Enter number of shifts: ");
	scanf("%d", &a);

	printf("Enter number of hours in a shifts: ");
	scanf("%d", &b);

	printf("Enter yout hourly rate: ");
	scanf("%d", &c);

	result = c * b * a;

	printf("Your monthly income will be: %d", result);
}

void exercise_2_4_b()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;
	printf("Result is %d", result);
}

void exercise_2_3_e_f_g_b()
{
	printf("This is a C program.\n\n");

	printf("This is a\n C program.\n\n");

	printf("This\n is\n a\n C\n program.\n\n");

	printf("This\n");
	printf("is\n");
	printf("a\n");
	printf("C\n");
	printf("program.\n");
}


void exercise_2_3_d()
{

	int number = 0;

	printf("Enter an integer :");
	scanf("%d", &number);

	if (number != 7)
	{
		printf("The variable number is not equal to 7\n");
	}

	if (number == 7)
	{
		printf("The variable number equal to 7\n");
	}

}

void exercise_2_13_b_c()
{
	int a = 0;

	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Your integer is: %d\n", a);

}


void exercise_2_18()
{
	int a = 0;
	int b = 0;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d is larger\n", a);

	}
	else if (b > a)
	{
		printf("%d is larger\n", b);
	}
}


int main(void)
{
	/* 2.3 - a, 2.4 - a */
	int x, y, z, a, a1, b1, c, c1, a2, b2, d, e, result, number, q766354, thisVariable;

	printf("ENTER TWO NUMBERSZ: ");
	scanf("%d %d", &a2, &b2);
	printf("%d\n", (a2 * b2 * (a2 + (b2 * a2 / (a2)))));

	exercise_2_9();

	return 0;
}

