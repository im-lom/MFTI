/*
 Ввести целое число и определить, верно ли, 
 что все его цифры расположены в порядке возрастания.
 */

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	while (a != 0) {
		if ((a / 10) > 0) { 
			if ((a % 10) <= ((a / 10) % 10)) {
				printf("%s\n","NO"); 
				return 0;
			}	
		};
		a = a / 10;
	}
	printf("%s\n","YES");
    return 0;
}
