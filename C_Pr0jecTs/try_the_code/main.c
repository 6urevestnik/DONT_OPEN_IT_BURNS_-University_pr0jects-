# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void ex_1()
{
	float number;
	number = 0X0E + 10E-1F;
	printf("Number 1 is %.2f\n", number);
}

void ex_2()
{
	float number2;
	number2 = 0X1E + 10;
	printf("Number 2 is %.2f\n", number2);
}

void ex_3()
{
	int a = -2;
	int b = -1;
	int c = 0;
	int r;

	r = a < b < c;

	printf("Number is %d", r);
}

void ex_4()
{
	int a;
	int b = 2;
	int c = 3;

	printf("before:\na is 0\nb is %d\nc is %d\n\n", b, c);

	a = b += c = 1 < b;
	printf("after:\na is %d\nb is %d\nc is %d\n", a, b, c);
}

void ex_5()
{
	int a;
	int b = 2;
	int c = 3;

	printf("before:\na is 0\nb is %d\nc is %d\n\n", b, c);

	a = (b += (c = 1)) < b;
	printf("after:\na is %d\nb is %d\nc is %d\n", a, b, c);
}

void ex_6()
{
	int a, b, max;
	
	printf("Enter 2 ints: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	printf("Max is %d", max);
}

void ex_7()
{
	int a;

	printf("Enter number: ");
	scanf("%d", &a);

	if (a >= 25 && a <= 40)
	{
		printf("succes!");
	}
	else
		printf("fail!");
}

int main(void)
{
	printf("Hello there!\n");

	ex_7();

	return 0;
}
