/* Программа сложения */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;									/* Объявление переменных */

	printf("Enter first number \n");				/* инструкция */
	scanf("%d", &a);								/* ввод переменной а */
	printf("Enter second number: \n");				/* инструкция */
	scanf("%d", &b);								/* ввод переменной б */
	printf("Annswer is: %d\n" a + b);				/* вывод ответа */

	return 0;
}