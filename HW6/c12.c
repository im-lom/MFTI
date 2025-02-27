/*
 Составить функцию, которая вычисляет синус 
 как сумму ряда (с точностью 0.001)
 sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
 float sinus(float x)
 */

#include <stdio.h>
#include <math.h>

int fact(int n)
{
  return (n < 2) ? 1 : n * fact(n - 1);
}

float sinus(float x)
{
    float q, sum = 0.0;
    int i = 3, sign = -1;

    q = x;
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
    printf("%.3f", sinus(x));
    return 0;
}
