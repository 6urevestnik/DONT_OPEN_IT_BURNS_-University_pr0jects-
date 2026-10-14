#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* 2.3 - a */
	int c, thisVariable, q766354, number, a;

    /* 2.3 - b, c */
	printf("Enter integer number: ");
	scanf("%d", &a);
	printf("Your integer number is: %d\n", a);

	/* 2.3 - d */
	printf("Enter var number: ");
	scanf("%d", &number);

	if (number != 7)
	{
		printf("The variable number is not equal to 7.\n");
	}

	/* 2.3 - e */
	printf("This is a C program.\n");

	/* 2.3 - f */
	printf("Tis is a\n C program.\n");

	/* 2.3 - g */
	printf("This\n is\n a\n C\n program\n");

	return 0;
}

