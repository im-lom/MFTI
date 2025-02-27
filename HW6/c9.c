/*
Составить функцию вычисления N!. 
Использовать ее при вычислении факториала int factorial(int n)
 */

#include <stdio.h>
int factorial(int n)
{
	int i = 1, mul = 1;
    for (i=1; i<=n; i++){
    	mul *= i;
	}
	return mul;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%u",factorial(num));
    return 0;
}
