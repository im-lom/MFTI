/*
Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. 
Число не превосходит 100 
*/

#include <stdio.h>

int main()
{
	int a, i;
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
		printf("%d %d %d\n",i, i*i, i*i*i);
		}
    return 0;
}
