/*
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
*/

#include <stdio.h>

int main()
{
	int a, count = 0;
	scanf("%d",&a);
	while (a != 0) {
		count++;
		a = a / 10;
		}
	if (count == 3) { printf("%s\n","YES"); }
	else  { printf("%s\n","NO"); }
    return 0;
}
