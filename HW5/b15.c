/*
Дана последовательность ненулевых целых чисел, 
в конце последовательности число 0. Посчитать количество четных чисел.
 */

#include <stdio.h>

int main()
{
	int a, even = 0;
	while (1) {
		scanf("%d",&a);
		if (a != 0) {
			if (((a % 10) % 2) == 0) { even++; }
		}
		else {
			printf("%d\n", even); 
			return 0;	
		}		
	}
}
