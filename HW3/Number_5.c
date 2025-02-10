/*
Ввести три числа, найти их среднее арифметическое.
 */


#include <stdio.h>

int main()
{
	int a,b,c;
	float avg;
	scanf("%d%d%d",&a,&b,&c);
	avg = (a+b+c)/3.0;
	printf("%.2f",avg);
	return 0;
}

