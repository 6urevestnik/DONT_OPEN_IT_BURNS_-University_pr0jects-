#define _CRT_SECURE_NO_WARNINGS												/* Разрешение использовать scanf */
#include <stdio.h>															/* Подключение стандартных модулей ввода и вывода */

/* begin */
void main(void)																/* Тело программы */
{
	printf("Laboratory work 1.2\n\n");

	char will_return = 'Y';													/* Переменная для повторения кода программы */
	while (will_return == 'Y')												/* Цикл для повторения кода программы */
	{
		/* Инициализация переменных */
		int t = 0;															/* Переменная, для подсчёта времени */
		int K = 0;
		int S = 0;
		int N = 0;
		int P = 0;
		int M = 0;															/* Переменные, для промежуточных вычислений */

		printf("Enter K ishodnui zapas semyan: ");								/* Ввод K - исходного запаса семян */
		scanf("%d", &K);

		printf("Enter S ploshyad polya: ");									/* Ввод S - площади поля */
		scanf("%d", &S);													

		printf("Enter N norma vyseva: ");										/* Ввод N - нормы высева */
		scanf("%d", &N);

		printf("Enter P urozhai za sezon: ");									/* Ввод P - урожай за сезон */
		scanf("%d", &P);

		while (K <= M)
		{
			M = S * N;														/* Вычисление M - требуемого количества семян для засева всего поля */
			printf("M is %d", M);

			if (P > 0)														/* Если P - урожай за сезон < 0, то в итоге поле не будет засеяно */
			{
				if (K <= M)													/* Если K - запас семян < M - требуемого кол-ва семян для засева, ждём ещё год */
				{
					K *= P;													/* Исходный запас семян прибавляет урожая за сезон */
					t++;													/* Счётчик считает сколько лет проходит */
				}
			}
		}

		printf("Result is %d\n\n", M);
		

	}

	return 0;
}


