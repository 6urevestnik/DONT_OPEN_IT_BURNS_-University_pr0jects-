#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* 2.3 - a, 2.4 - a */
	int c, thisVariable, q766354, number, a, x, y, z, result, a1, b1, c1, a2, b2;

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

	/* 2.4 - b */
	printf("Enter three numbers \n");
	scanf("%d%d%d", &x, &y, &z);
	result = x * y * z;
	printf("The product is %d\n", result);

	/* 2.9 */
	printf("Enter two numbers: ");
	scanf("%d %d", &b1, &c1);
	a1 = b1 * c1;
	printf("Zarplata = smeny * stavka: %d\n", a1);

	printf("ENTER TWO NUMBERSZ: ");
	scanf("%d %d", &a2, &b2);
	printf("%d\n", (a2 * b2 * (a2 + (b2 * a2 / (a2)))));

	printf("1, 2, 3, 4\n");
	printf("%d %d %d %d\n", a1, b1, c1, result);
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4\n");

	return 0;
}

