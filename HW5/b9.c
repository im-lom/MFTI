/*
 Ввести целое число и определить, верно ли, что все его цифры четные.
*/

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	while (a != 0) {
		if (((a % 10) % 2) != 0) { 
			printf("%s\n","NO"); 
			return 0;
			};
		a = a / 10;
		}
	printf("%s\n","YES");
    return 0;
}
