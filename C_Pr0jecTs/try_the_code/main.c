# define CRT_MESSAGES_NO_WARNINGS
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


int main(void)
{
	printf("Hello there!\n");

	return 0;
}
