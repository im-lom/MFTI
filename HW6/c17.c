/*
Составить логическую функцию, которая определяет, верно ли, 
что в заданном числе сумма цифр равна произведению. 
int is_happy_number(int n)
 */

#include <stdio.h>
int is_happy_number(int n)
{
	int tmp, sum, mul;
		sum = 0;
		mul = 1;
		tmp = n;
		while (tmp != 0) {
			//printf("%d ",a);
			mul = mul * (tmp % 10);
			sum = sum + (tmp % 10);
			tmp = tmp / 10;
			}
	if (sum == mul) { printf("%s", "YES"); }
	else { printf("%s", "NO"); }
	
    return 0;
}
int main()
{
    int num;
    scanf("%d",&num);
    is_happy_number(num);
    return 0;
}
