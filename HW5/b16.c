/*
Составить программу для вычисления НОД с помощью алгоритма Евклида. 
Даны два натуральных числа. Найти наибольший общий делитель.
 */

#include <stdio.h>

int main()
{
	int a, b, tmp = 0, max = 0, min = 0;
	scanf("%d%d",&a, &b);
	if (a > b) { 
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	};
	while (min != 0) {
		tmp = min;
		min = max % min;
		max = tmp;
		}
	printf("%d\n", max);
    return 0;
}
