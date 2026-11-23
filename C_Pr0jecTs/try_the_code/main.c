# define CRT_MESSAGES_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	float number;
	number = 0X0E + 10E-1F;
	printf("Number 1 is %.2f\n", number);

	float number2;
	number2 = 0X1E + 10;
	printf("Number 2 is %.2f\n", number2);

	return 0;
}
