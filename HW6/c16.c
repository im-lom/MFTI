/*
 Составить функцию логическую функцию, которая определяет, верно ли, 
 что число простое. Используя функцию решить задачу. int is_prime(int n)
 */

#include <stdio.h>
#include <math.h>

int is_prime(int a)
{
	int i, sq = 0;
	sq = rint(sqrt(a));
	if (a == 1 || a == 0) {
		printf("%s\n","NO");
		return 0;
	}
	for (i = 2; i <= sq; i++) {
		if ((a % i) == 0) {
			printf("%s\n","NO");
			return 0;
		}	
	}
	printf("%s\n","YES");
	return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    is_prime(num);
    return 0;
}
