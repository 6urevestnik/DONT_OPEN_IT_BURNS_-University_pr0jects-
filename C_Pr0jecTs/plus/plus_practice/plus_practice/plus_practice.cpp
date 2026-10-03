/* Программа сложения */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;									/* Объявление переменных */

	printf("Enter first number \n");				/* инструкция */
	scanf("%d", &a);								/* ввод переменной а */
	printf("Enter second number: \n");				/* инструкция */
	scanf("%d", &b);								/* ввод переменной б */
	c = a + b;										/* переменной с присвоить сумму переменных а и б */
	printf("Answer is: %d\n", c);

	return 0;
}