#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;


	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a > 0 && b > 0 && a < 2 * b)
	{
		/* Решаю часть задачи под корнем */
		b = b * b;								/* Узнаю чему равен квадрат б */
		a = a * a;								/* Узнаю чему равен квадрат а */

		a = a / 4;								/* Решаю a*a/4 */
		c = b - a;								/* Узнаю какое число под корнем */
		printf("a is %d, b is %d, c is %d", a, b, c);
	}

	return 0;
}