/*
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
*/

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a < b && b < c)
		printf("%s","YES");
	else
		printf("%s","NO");
    return 0;
}

