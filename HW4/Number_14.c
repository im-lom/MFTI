/*
Дано трехзначное число, напечатать макисмальную цифру
 */

#include <stdio.h>

int main()
{
	int a,x,y,max;
	scanf("%d",&a);
	x = (a/100)%10;
	y = (a/10)%10;
	max =  x > y ?  x : y;
	y = a%10;
    max = max > y ? max: y;
    printf("%d",max);
    return 0;
}
