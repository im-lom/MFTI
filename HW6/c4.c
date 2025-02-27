/*
Описать функцию вычисления f(x) по формуле: 
f(x)= x*x при -2 ≤ x < 2;
x*x+4x+5 при x ≥ 2;
4 при x < -2.
Используя эту функцию для n заданных чисел, вычислить f(x). 
Среди вычисленных значений найти наибольшее.
 */

#include <stdio.h>
int f(int x)
{
	if (x < -2) {
		return 4;
	}
	else if ((x >= -2) && (x < 2)) {
		return x*x;
	}
	else if (x >= 2) {
		return x*x + 4*x + 5;
	};	
	return 0;
}

int main()
{
	int a, max = -32768;
	while (1) {
		scanf("%d",&a);
		if (a != 0) {
			if (f(a) > max) {
				max = f(a);
			}
		}
		else {	
			printf("%d", max);
			return 0;
		}	
	}	
}
