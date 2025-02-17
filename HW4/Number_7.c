/*
 Ввести два числа и вывести их в порядке возрастания.
 */

#include <stdio.h>

int main()
{
	int a,b,min,max;
	scanf("%d%d",&a,&b);
	if (a>b) 
    {   max = a; min = b; }
    else
    {   max = b; min = a; }
    printf("%d %d", min, max);
    return 0;
}


