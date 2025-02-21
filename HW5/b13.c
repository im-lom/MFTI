/*
Посчитать количество четных и нечетных цифр числа.
 */

#include <stdio.h>

int main()
{
	int a, even = 0, odd = 0;
	scanf("%d",&a);
	while (a != 0) {
		if (((a % 10) % 2) != 0) { odd++; }
		else { even++; };	
		a = a / 10;
		}
	printf("%d %d\n",even, odd);
    return 0;
}
