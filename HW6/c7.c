/*
 Составить функцию, которая переводит число N из десятичной системы 
 счисления в P-ичную систему счисления.
 */

#include <stdio.h>
#include <math.h>

unsigned long int conver(int num, int base)
{
	int a, i=1;
	unsigned long int res = 0;
	a = num;
	if ((a/base) == 0) {
		return a%base;
	}
	while (a != 0) {
//		printf("%d ", a);
		res = res + (a%base)*i;
		a = a / base;
		i*=10;
	}
	return res;
}

int main()
{
    int n, b;
    scanf("%d%d",&n, &b);
    printf("%lu",conver(n, b));
    return 0;
}
