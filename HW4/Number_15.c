/*
Определить уравнение прямой по координатам двух точек. 
Уравнение вида y=k*x+b

| y1 = kx1 + b
| y2 = kx2 + b
b = y2 — kx2
y1 = kx1 + y2 — kx2
k = (y1 — y2) / (x1 — x2)
*/

#include <stdio.h>

int main()
{
	int x1,y1,x2,y2;
	float k,b;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	k = (float)(y1-y2) / (float)(x1-x2);
	b = (float)y2 - k*(float)x2;
    printf("%.2f %.2f",k,b);
    return 0;
}
