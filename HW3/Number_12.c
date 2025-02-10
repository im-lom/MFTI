/*
 На вход подается произвольное трехзначное число, напечать сумму цифр
 */


#include <stdio.h>

int main()
{
	int num,sum = 0;
	scanf("%d",&num);
	sum += num%10;
	sum += (num/10)%10;
	sum += (num/100)%10;
	printf("%d",sum);
	return 0;
}

