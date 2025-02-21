/*
Ввести целое число и «перевернуть» его, 
так чтобы первая цифра стала последней и т.д.
 */

#include <stdio.h>

int main()
{
	int a, num = 0;
	scanf("%d",&a);
	while (a != 0) {
		num = (num * 10) + (a % 10);
		a = a / 10;
	}
	printf("%d\n", num);
    return 0;
}
