#include<stdio.h>
#include<stdlib.h>
int power(int a, int b);
int main()
{
	int c, d;
	printf("please input a base:");
	scanf_s("%d", &c);
	printf("please input a exponent:");
	scanf_s("%d", &d);
	printf("The answer is:%d\n",power(c,d) );
	system("pause");
}
int power(int a, int b) 
{
	int i; int powerX = 1;
	for (i = 1;i <= b;i++)
		powerX = powerX * a;
	return powerX;
}