#include<stdio.h>
#include<stdlib.h>

int LCM(int a, int b);
int GCD(int a, int b);
int main()
{
	int number1, number2,LCM1;
	printf("please input two numbers:");
	scanf_s("%d %d", &number1, &number2);
	LCM1 = LCM(number1, number2);
	printf("The LCM is %d",LCM1 );
	system("pause");
}
int GCD(int a, int b)
{
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}
