/*
Ввести целое число и найти сумму его цифр.
*/

#include <stdio.h>

int main()
{
	int a, sum = 0;
	scanf("%d",&a);
	while (a != 0) {
		sum +=a % 10;
		a = a / 10;
		}
	printf("%d\n",sum); 
    return 0;
}
