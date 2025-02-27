/*
Составить функцию логическую функцию, которая определяет, верно ли, 
что в заданном числе все цифры стоят по возрастанию. 
Используя данную функцию решить задачу. int grow_up(int n)
 */

#include <stdio.h>
int grow_up(int n)
{
	while (n != 0) {
		if ((n / 10) > 0) { 
			if ((n % 10) <= ((n / 10) % 10)) {
				printf("%s\n","NO"); 
				return 0;
			}	
		};
		n = n / 10;
	}
	printf("%s\n","YES");
    return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    grow_up(num);
    return 0;
}
