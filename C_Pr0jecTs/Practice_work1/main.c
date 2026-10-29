#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 0;												/* Отдельные переменные чтобы не потерять начальные значения */
	int b = 0;
	int a2, b2, c, c2, d;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a > 0 && b > 0 && a < 2 * b)
	{
		/* Решаю часть задачи под корнем */
		b2 = b * b;											/* Узнаю чему равен квадрат b */
		a2 = a * a;											/* Узнаю чему равен квадрат а */

		a2 = (double)a2 / 4;								/* Решаю a*a/4 */
		c = b2 - a2;										/* Узнаю какое число под корнем */
		c2 = sqrt(c);										/* Узнаю чему равен квадратный корень - это высота */
		d = (1 / 2) * (a / 1) * (c2 / 1);									/* Узнаю площадь */

		printf("a is %d, b is %d,\na2 is %d, b2 is %d,\nc is %d, c2 is %d\nS = %d", b, a, a2, b2, c, c2, d);
	}

	return 0;
}