/*
Составить функцию, возведение числа N в степень P. int power(n, p) 
и привести пример ее использования
 */

#include <stdio.h>
int power(int n, int p)
{
	int i = 1, mul = 1;
    while (i <= p) {
		mul *= n;
		i++;
	}
	return mul;
}
int main()
{
    int num, pn;
    scanf("%d%d",&num, &pn);
    printf("%d",power(num, pn));
    return 0;
}
