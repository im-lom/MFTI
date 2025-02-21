/*
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
*/

#include <stdio.h>

int main()
{
	int a, b, sum = 0, i;
	scanf("%d%d",&a, &b);
	for (i=a;i<=b;i++) {
		sum +=i*i;
		}
	printf("%d\n",sum);
    return 0;
}
