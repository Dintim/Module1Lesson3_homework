#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n==1)
	{
		//X �� ������ ����� � ������. ������� ����� 1 �� � Y �� ���� ������
		int x = 0, a = 0;
		printf("������� ����� � ��: ");
		scanf("%d", &x);

		printf("������� ��������� ����� � ��: ");
		scanf("%d", &a);

		int one = 0, y_cost = 0, y=0;
		one = a / x;
		
		printf("������� ����� Y � ��: ");
		scanf("%d", &y);

		y_cost = y*one;

		printf("���� �� ������ ����� %d ��\nY �� ������ ����� %d ��\n", one, y_cost);

	}
	else if (n==2)
	{
		//������ �������� ��������� a*x+b=0, � �� ����� ����
		int a = 0, b = 0, x = 0;
		printf("������� a: ");
		scanf("%d", &a);

		if (a==0)
		{
			printf("a �� ������ ���� ����� ����!\n");
		}
		else
		{
			printf("������� b: ");
			scanf("%d", &b);

			x = -(b / a);

			printf("x ����� %d\n", x);
		}
					
	}
	else if (n==3)
	{
		//� ������ ����� ������ N ������. ����� ���������� ������ �����, ��������� � ������ �����
		int x = 0, y = 0;
		printf("������� ������ ������ � ������ �����: ");
		scanf("%d", &x);

		y = x / 60;
		printf("� ������ ����� ������ ������ %d ����� \n", y);
	}

}