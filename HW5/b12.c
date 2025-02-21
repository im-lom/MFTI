/*
 Организовать ввод натурального числа с клавиатуры. 
 Программа должна определить наименьшую и наибольшую цифры, 
 которые входят в состав данного натурального числа.
 */

#include <stdio.h>

int main()
{
	int a, tmp, min = 10, max = 0;
	scanf("%d",&a);
	while (a != 0) {
		tmp = a % 10;
		if (tmp <= min) { min = tmp; }
		if (tmp >= max) { max = tmp; }
		a = a / 10;
		}
	printf("%d %d\n", min, max); 
    return 0; 
}
