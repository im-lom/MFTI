/*
Ввести целое число и определить, верно ли, 
что в его записи есть две одинаковые цифры, стоящие рядом.
*/

#include <stdio.h>

int main()
{
	int a, d1, d2;
	scanf("%d",&a);
	while (a != 0) {
		d1 = a % 10;
		d2 = a / 10 % 10;
		if (d1 == d2) {
			printf("%s\n","YES");
			return 0;
		}
		a = a / 10;
		}
	printf("%s\n","NO"); 
    return 0;
}
