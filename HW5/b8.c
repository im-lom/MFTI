/*
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
*/

#include <stdio.h>

int main()
{
	int a, count = 0;
	scanf("%d",&a);
	while (a != 0) {
		if ((a % 10) == 9) { count++; };
		a = a / 10;
		}
	if (count == 1) { printf("%s\n","YES"); }
	else  { printf("%s\n","NO"); }
    return 0;
}
