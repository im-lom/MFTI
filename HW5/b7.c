/*
Ввести целое число и определить, верно ли, 
что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.
 */

#include <stdio.h>

int main()
{
	int a, tmp, d1, d2;
	scanf("%d",&a);
	while (a != 0) {
		d1 = a % 10;
		tmp = a;
		while ((tmp/10) != 0) {
			d2 = tmp / 10 % 10;
			if (d1 == d2) {
				printf("%s\n","YES");
				return 0;
			}
			tmp = tmp / 10;
		}	
		a = a / 10;
	}
	printf("%s\n","NO"); 
    return 0;
}
