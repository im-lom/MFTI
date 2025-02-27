/*
 Составить функцию, которая определяет сумму всех чисел от 1 до N 
 и привести пример ее использования.
 */

#include <stdio.h>
int sum(int n)
{
	int i, s = 0;
	for (i=1; i<=n; i++){
		s += i;
	};
	return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
