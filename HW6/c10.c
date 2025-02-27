/*
 Составить функцию, печать всех простых множителей числа. 
 Использовать ее для печати всех простых множителей числа. 
 void print_simple(int n)
 */

#include <stdio.h>
void print_simple(int n)
{
	int a = n, del = 2;
	
	if (a < 2)
		printf("%s","");
	else {
		while (del <= a){
			if ((a % del) == 0){
				a = a / del;
				printf("%d ", del);
			}
			else {	
				del++;
			}
		}
	}
	
}

int main()
{
    int num;
    scanf("%d",&num);
    print_simple(num);
    return 0;
}
