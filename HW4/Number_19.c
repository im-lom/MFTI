/*
Даны стороны треугольника a, b, c. 
Определить существует ли такой треугольник.
*/

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a < (b+c) && b < (a+c) && c < (a+b))
		printf("%s","YES");
	else
		printf("%s","NO");
    return 0;
}
