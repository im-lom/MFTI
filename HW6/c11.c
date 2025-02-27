/*
 Составить функцию, которая определяет наибольший общий делитель двух 
 натуральных и привести пример ее использования. int nod(int a, int b)
 */

#include <stdio.h>
int nod(int a, int b)
{
	int tmp = 0, max = 0, min = 0;
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
	return max;
}
int main()
{
    int a, b;
    scanf("%d%d",&a, &b);
    printf("%d",nod(a, b));
    return 0;
}
