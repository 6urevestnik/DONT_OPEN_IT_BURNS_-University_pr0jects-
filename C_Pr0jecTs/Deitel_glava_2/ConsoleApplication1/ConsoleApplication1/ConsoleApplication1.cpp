#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exercise_2_9()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	printf("Enter number of shifts: ");
	scanf("%d", &a);

	printf("Enter number of hours in a shifts: ");
	scanf("%d", &b);

	printf("Enter yout hourly rate: ");
	scanf("%d", &c);

	result = c * b * a;

	printf("Your monthly income will be: %d", result);
}

void exercise_2_4_b()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;
	printf("Result is %d", result);
}

void exercise_2_3_e_f_g_b()
{
	printf("This is a C program.\n\n");

	printf("This is a\n C program.\n\n");

	printf("This\n is\n a\n C\n program.\n\n");

	printf("This\n");
	printf("is\n");
	printf("a\n");
	printf("C\n");
	printf("program.\n");
}


void exercise_2_3_d()
{

	int number = 0;

	printf("Enter an integer :");
	scanf("%d", &number);

	if (number != 7)
	{
		printf("The variable number is not equal to 7\n");
	}

	if (number == 7)
	{
		printf("The variable number equal to 7\n");
	}

}

void exercise_2_13_b_c()
{
	int a = 0;

	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Your integer is: %d\n", a);

}


void exercise_2_18()
{
	int a = 0;
	int b = 0;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d is larger\n", a);

	}
	else if (b > a)
	{
		printf("%d is larger\n", b);
	}
}

void exercise_2_19()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("\nSum is %d\n\n", a + b + c);

	printf("Average is %d\n\n", (a + b + c) / 3);

	printf("Product is %d\n\n", a * b * c);

	/* Largest */
	if (a >= b && a >= c)
	{
		printf("Largest is %d\n\n", a);
	}
	else if (b >= a && b >= c)
	{
		printf("Largest is %d\n\n", b);
	}
	else
	{
		printf("Largest is %d\n\n", c);
	}

	/* Smallest */
	if (a <= b && a <= c)
	{
		printf("Smallest is %d\n\n", a);
	}
	else if (b <= a && b <= c)
	{
		printf("Smallest if %d\n\n", b);
	}
	else
	{
		printf("Smallest is %d\n\n", c);
	}

}

void exercise_2_20()
{
	int radius = 0;
	int diametr = 0;
	double perimeter = 0;
	double area = 0;
	int radius_2 = 0;

	printf("Enter the radius: ");
	scanf("%d", &radius);

	diametr = 2 * radius;
	printf("\nDiametr is %d\n\n", diametr);

	perimeter = 3.14 * diametr;
	printf("Perimetr is %.f\n\n", perimeter);

	radius_2 = radius * radius;
	area = 3.14 * radius_2;
	printf("Area is %.f\n\n", area);
}

void exercise_2_21()
{
	printf("**********       ******          *           *      \n");
	printf("*        *      *      *        ***         * *     \n");
	printf("*        *     *        *      *****       *   *    \n");
	printf("*        *     *        *     *******     *     *   \n");
	printf("*        *     *        *        *       *       *  \n");
	printf("*        *     *        *        *        *     *   \n");
	printf("*        *     *        *        *         *   *    \n");
	printf("*        *      *      *         *          * *     \n");
	printf("**********       ******          *           *      \n\n ");
}

void exercise_2_22()
{
	printf("*\n**\n***\n****\n*****\n");
}

void exercise_2_23()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a > b && a > c && a > d && a > e)
	{
		printf("Largest is %d", a);
	}
	else if (b > a && b > c && b > d && b > e)
	{
		printf("Largest is %d", b);
	}
	else if (c > a && c > b && c > d && c > e)
	{
		printf("Largest is %d", c);
	}
	else if (d > a && d > b && d > c && d > e)
	{
		printf("Largest is %d", d);
	}
	else
	{
		printf("Largest is %d", e);
	}
}

void exercise_2_24()
{
	int a = 0;

	printf("Enter integer: ");
	scanf("%d", &a);
	a = a % 2;
	printf("%d", a);
	if (a != 0)
	{
		printf("Number is odd");
	}
	else
	{
		printf("Numbers is even");
	}
}

void exercise_2_25()
{
	printf("PPPPPPPP     DDDDDDD           A       \n");
	printf("P       P    D      D         A A      \n");
	printf("P       P    D       D       A   A     \n");
	printf("PPPPPPPPP    D       D      AAAAAAA    \n");
	printf("P            D       D     A       A   \n");
	printf("P            D       D     A       A   \n");
	printf("P            D      D      A       A   \n");
	printf("P            DDDDDDD       A       A   \n");
}

void rpd()
{
	printf("|===================================================\n");
	printf("|                                                  |\n");
	printf("|    RRRRRRR       PPPPPPPP       DDDDDDDD         |\n");
	printf("|    R      R      P       P      D       D        |\n");
	printf("|    R       R     P        P     D        D       |\n");
	printf("|    R      R      P       P      D         D      |\n");
	printf("|    RRRRRR        PPPPPPPP       D         D      |\n");
	printf("|    R R           P              D         D      |\n");
	printf("|    R  R          P              D         D      |\n");
	printf("|    R   R         P              D        D       |\n");
	printf("|    R    R        P              D       D        |\n");
	printf("|    R     R       P              DDDDDDDD         |\n");
	printf("|                                                  |\n");
	printf("|==================================================|\n");
}

void exercise_2_27()
{
	printf("\n\n* * * * * * * * \n");
	printf(" * * * * * * * * \n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * * \n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * * \n");
	printf("* * * * * * * * \n");
	printf(" * * * * * * * * \n\n\n");

	printf("* * * * * * * *\n * * * * * * * * \n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * *\n");

}

void exercise_2_26()
{
	int a = 0;
	int b = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a % b == 0)
	{
		printf("Number %d is multiple of number %d", a, b);
	}
	else
	{
		printf("Number %d is not multiple of number %d", a, b);
	}
}

void exercise_2_29()
{
	printf("A - %d\n", 'A');
	printf("B - %d\n", 'B');
	printf("C - %d\n", 'C');
	printf("a - %d\n", 'a');
	printf("b - %d\n", 'b');
	printf("c - %d\n", 'c');
	printf("0 - %d\n", '0');
	printf("1 - %d\n", '1');
	printf("2 - %d\n", '2');
	printf("$ - %d\n", '$');
	printf("* - %d\n", '*');
	printf("+ - %d\n", '+');
	printf("/ - %d\n", '/');
	printf("space - %d\n", ' ');
}

void exercise_2_30()
{

	char numbers[6];
	
	printf("Enter a five-digit number: ");
	scanf("%s", numbers);

	printf("%c   %c   %c   %c   %c", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

}

void exercise_2_31()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	int g = 7;
	int h = 8;
	int i = 9;
	int j = 10;

	printf("|========|========|===========|\n");
	printf("| Number | Square | Cube      |\n");
	printf("|========|========|===========|\n");
	printf("| %d      | %d      | %d         |\n", a, a * a, a * a * a);
	printf("| %d      | %d      | %d         |\n", b, b * b, b * b * b);
	printf("| %d      | %d      | %d        |\n", c, c * c, c * c * c);
	printf("| %d      | %d     | %d        |\n", d, d * d, d * d * d);
	printf("| %d      | %d     | %d       |\n", e, e * e, e * e * e);
	printf("| %d      | %d     | %d       |\n", f, f * f, f * f * f);
	printf("| %d      | %d     | %d       |\n", g, g * g, g * g * g);
	printf("| %d      | %d     | %d       |\n", h, h * h, h * h * h);
	printf("| %d      | %d     | %d       |\n", i, i * i, i * i * i);
	printf("| %d     | %d    | %d      |\n", j, j * j, j * j * j);
	printf("|=======|=========|===========|");

	printf("\nin progress...\n");
	printf("stay calm fucker!");
}

void glava3_1ex()
{
	int a;

	printf("Enter number: ");
	scanf("%d", &a);

	if (a > 90)
	{
		printf("A\n");
	}
	else if (a > 80)
	{
		printf("B\n");
	}
	else if (a > 70)
	{
		printf("C\n");
	}
	else if (a > 60)
	{
		printf("D\n");
	}
	else
		printf("F\n");
}

void empty_operator()
{
	int a = 1;

	while (a++ < 10);
	{
		;
	}
	printf("%d", a);
}

void glava3_2ex()
{
	int product = 2;
	int count1 = 1;

	while (product <= 1000)
	{
		printf("| %d | %d |\n", count1, product);
		count1++;
		product *= 2;
	}
}

void glava3_3ex()
{
	int a = 0;
	int b = 0;

	printf("Enter number: ");
	scanf("%d", &a);

	while (b <= a)
	{
		printf("%d\n", b);
		b += 1;
	}
}

void glava3_4ex()
{
	int grade;
	int total = 0;
	int counter = 0;

	while (counter < 10)
	{
		printf("Enter grade: ");
		scanf("%d", &grade);
		total += grade;
		counter++;
	}
	printf("Counter is: %d\n", counter);
	printf("Class average is: %d", total / counter);

}

void glava3_5ex()
{
	int grade = 0;
	int total = 0;
	int counter = 0;

	while (grade != -1)
	{
		printf("Enter grade: ");
		scanf("%d", &grade);
		if (grade != -1)
		{
			total += grade;
			counter++;
		}
	}
	printf("\nCounter is: %d\nTotal is: %d\n", counter, total);
	printf("Average is: %d\n\n", total / counter);
}

int main(void)
{
	int a, b, c, result, number;

	exercise_2_31();

	printf("\n\n\n");

	glava3_5ex();

	return 0;
}