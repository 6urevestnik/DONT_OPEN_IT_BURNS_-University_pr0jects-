#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Enter two number and i will tell you\n");
	printf("the relationship they satisfy : ");
	scanf("%d %d", &num1, &num2);

	if (num1 == num2)
		printf("%d is equal to %d\n", num1, num2);

	if (num1 != num2)
		printf("%d is not equal to %d\n", num1, num2);

	if (num1 < num2)
		printf("%d is less than %d\n", num1, num2);

	if (num1 > num2)
		printf("%d is greater then %d\n", num1, num2);

	if (num1 <= num2)
		printf("%d is less than or equal to %d\n", num1, num2);

	if (num1 >= num2)
		printf("%d is greater than or equal %d\n", num1, num2);

	return 0;
}