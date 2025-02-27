/*
 Составить функцию, которая переводит латинскую строчную букву в заглавную. 
 И показать пример ее использования.
 */

#include <stdio.h>
void shift(char s)
{
    if (s>='a' && s<='z') 
        putchar('A' + (s -'a'));
    else
        putchar(s);
}
int main()
{
    char c;
    while( (c=getchar())!='.') 
	shift (c);
    return 0;
}
