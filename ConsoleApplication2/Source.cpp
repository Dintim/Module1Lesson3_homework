#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int n = 0;
	printf("введите номер задания: ");
	scanf("%d", &n);

	if (n==1)
	{
		//X кг конфет стоит А рублей. Сколько стоит 1 кг и Y кг этих конфет
		int x = 0, a = 0;
		printf("введите массу в кг: ");
		scanf("%d", &x);

		printf("введите стоимость массы в тг: ");
		scanf("%d", &a);

		int one = 0, y_cost = 0, y=0;
		one = a / x;
		
		printf("введите массу Y в кг: ");
		scanf("%d", &y);

		y_cost = y*one;

		printf("один кг конфет стоит %d тг\nY кг конфет стоит %d тг\n", one, y_cost);

	}
	else if (n==2)
	{
		//решить линейное уравнение a*x+b=0, а не равно нулю
		int a = 0, b = 0, x = 0;
		printf("введите a: ");
		scanf("%d", &a);

		if (a==0)
		{
			printf("a не должно быть равно нулю!\n");
		}
		else
		{
			printf("введите b: ");
			scanf("%d", &b);

			x = -(b / a);

			printf("x равен %d\n", x);
		}
					
	}
	else if (n==3)
	{
		//с начала суток прошло N секунд. Найти количество полных минут, прошедших с начала суток
		int x = 0, y = 0;
		printf("сколько секунд прошло с начала суток: ");
		scanf("%d", &x);

		y = x / 60;
		printf("с начала суток прошло полных %d минут \n", y);
	}

}