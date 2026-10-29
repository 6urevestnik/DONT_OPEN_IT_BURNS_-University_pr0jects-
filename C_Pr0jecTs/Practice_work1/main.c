#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 0;												/* Отдельные переменные чтобы не потерять исходные значения сторон треугольника */
	int b = 0;
	double b2, c, a2, h, S;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a > 0 && b > 0 && a < 2 * b)
	{
		/* Решаю часть задачи под корнем */
		b2 = b * b;											/* Узнаю чему равен квадрат b */
		a2 = a * a;											/* Узнаю чему равен квадрат а */

		a2 = a2 / 4;										/* Решаю a*a/4 */
		c = b2 - a2;										/* Узнаю чему равно подкоренное выражение */
		h = sqrt(c);										/* Узнаю чему равен квадратный корень - это высота */
		S = 0.5 * a * h;									/* Узнаю площадь */

		printf("b is %d, a is %d,\na2 is %.2f, b2 is %.2f,\nc is %.2f, \nh is %.2f, S = %.2f", b, a, a2, b2, c, h, S);
	}

	return 0;
}