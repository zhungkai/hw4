#include<stdio.h>
#include<stdlib.h>
int main()
{
	char word;
	printf("Please input a character(A~Z):");
	scanf_s("%c", &word);
	word = word + 32;
	printf("The last answer is:%c\n", word);
	system("pause");
}