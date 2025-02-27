/*
Составить функцию логическую функцию, которая определяет, верно ли, 
что сумма его цифр – четное число. Используя эту функцию решить задачу.
 */

#include <stdio.h>
void is_even(int n)
{
	int sum = 0;
	while (n != 0) {
		sum +=n % 10;
		n = n / 10;
		}
	if ((sum % 2) == 0) { printf("%s\n","YES"); }
	else { printf("%s\n","NO"); }
}

int main()
{
    int num;
    scanf("%d",&num);
    is_even(num);
    return 0;
}
