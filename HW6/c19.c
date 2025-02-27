/*
 Составить функцию, которая преобразует текущий символ цифры в число. 
 Написать программу считающую сумму цифр в тексте. 
 int digit_to_num(char c)
 */

#include <stdio.h>
int digit_to_num(char c)
{
	if (c>='0' && c<='9')
		return c-48;
	else
		return 0;	
}

int main()
{
    char c;
    int sum = 0;
    while( (c=getchar())!='.') 
		sum += digit_to_num(c);
	printf("%d", sum);
    return 0;
}

