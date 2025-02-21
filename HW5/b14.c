/*
Дана последовательность ненулевых целых чисел, 
в конце последовательности число 0. Посчитать количество чисел.
 */

#include <stdio.h>

int main()
{
	int a, count = 0;
	while (1) {
		scanf("%d",&a);
		if (a != 0) {
			count++;
		}
		else {
			printf("%d\n", count); 
			return 0;	
		}
	}
}
