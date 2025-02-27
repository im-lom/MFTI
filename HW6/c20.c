/*
 На вход подается строка состоящая из символов '(', ')' и 
 заканчивающаяся символом '.'. Размер строки не более 1000 символов.
 */

#include <stdio.h>

int main()
{
    char c;
    int count = 0;
    while( (c=getchar())!='.') {
    	if (c == ')')	count --;
		if (c == '(')	count ++;
		if (count < 0) {
			printf("%s","NO");
			return 0;
		} 	
	}
	if (count == 0) 
		printf("%s","YES");
	else
		printf("%s","NO");	
	return 0;
}

