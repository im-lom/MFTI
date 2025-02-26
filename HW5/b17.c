/*
Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр
 */

#include <stdio.h>

int main()
{
	int a, i, tmp, sum, mul;
	scanf("%d",&a);
	for (i = 10; i <= a; i++) {
		//printf("%d ",i);
		sum = 0;
		mul = 1;
		tmp = i;
		while (tmp != 0) {
			//printf("%d ",a);
			mul =mul * (tmp % 10);
			sum =sum + (tmp % 10);
			tmp = tmp / 10;
			}
	if (sum == mul) { printf("%d ",i); }
	}
    return 0;
}
