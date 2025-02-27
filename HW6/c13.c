/*
 Составить функцию, которая вычисляет rjсинус 
 как сумму ряда (с точностью 0.001)
 cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
 float cosinus(float x)
 */

#include <stdio.h>
#include <math.h>

int fact(int n)
{
  return (n < 2) ? 1 : n * fact(n - 1);
}

float cosinus(float x)
{
    float q, sum = 0.0;
    int i = 2, sign = -1;

    q = 1;
    while (fabs(q) > 0.001){      
        sum = sum + q;
        q = sign * powf(x,i) / fact(i) ;
        i = i + 2; 
        sign = -sign;
    } 
    return sum;
}

int main()
{
    int a;
	float x;
	
	scanf("%d",&a);
    x = a * M_PI / 180;
    printf("%.3f", cosinus(x));
    return 0;
}
