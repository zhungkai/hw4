#include<stdio.h>
#include<stdlib.h>
unsigned long  a[48];
 int main()
 {
	 int i,j,k;
	 printf("please input a Fibonacci number:");
	 scanf_s("%d", &j );
	 for (i = 1;i <= j;i++)
	 {
		 a[1] = 0;
		 a[2] = 1;
		 if (i == 1) {
			 printf("0,");
		 }
		 else if (i == 2) {
			 printf("1,");
		 }
		 else {
			 a[i] = a[i- 2] + a[i - 1];
			 printf("%lu,", a[i]);
		 }
	 }
	 system("pause");
}
	 
 
