/*
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
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
	if (sum == 10) { printf("%s\n","YES"); }
	else { printf("%s\n","NO"); }
    return 0;
}
