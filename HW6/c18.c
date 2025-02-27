/*
 Составить логическую функцию, которая определяет, что текущий символ 
 это цифра. Написать программу считающую количество цифр в тексте. 
 int is_digit(char c)
 */

#include <stdio.h>
int is_digit(char c)
{
	if(c>='0' && c<='9')
		return 1;
	else
		return 0;	
}

int main()
{
    char c;
    int count = 0;
    while( (c=getchar())!='.') 
		count += is_digit(c);
	printf("%d", count);
    return 0;
}

