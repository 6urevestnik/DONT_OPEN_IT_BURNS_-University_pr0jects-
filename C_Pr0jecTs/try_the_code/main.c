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
		printf("succes!\n");
	}
	else
		printf("fail!\n");
}

void ex_8()
{
	int M, D;

	printf("Enter month number: ");
	scanf("%d", &M);

	switch (M)
	{
	case 2:
		D = 28;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		D = 30;
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		D = 31;
		break;

	default:
		D = -1;
	}

	if (D > 0)
	{
		printf("In this month %d days\n", D);
	}
	else
	{
		printf("WRONG NUMBER STUPID!\n");
	}
}

void ex_9()
{
	char c;

	printf("Enter first letter animal name: ");
	scanf(" %c", &c);
	printf("\n");;

	switch (c)
	{
	case 'a':
		printf("Alegator\n");
		break;

	case 'b':
		printf("Bear\n");
		break;

	case 'c':
		printf("Camel\n");
		break;

	case 'd':
		printf("Duck\n");
		break;

	case 'e':
		printf("Eagle\n");
		break;

	default:
		printf("Enter another letter!\n");
	}
}

void ex_10()
{
	int number;

	printf("Enter number: ");
	scanf("%d", &number);
	printf("\n");

	if (number == 0)
	{
		printf("Number is equal 0\n");
	}
	else
	{
		printf("Number is not equal 0\n");
	}
}

int main(void)
{
	char will_repeat = 'Y';

	printf("Hello there!\n\n");

	while (will_repeat == 'Y')
	{
		ex_10();

		printf("Will repeat? Y/N: ");
		scanf(" %c", &will_repeat);
		printf("\n");
	}

	printf("Bye!");
	

	return 0;
}
