/*
 Когда создатель шахмат, древнеиндийский мудрец и математик Сисса бен Дахир, 
 показал своё изобретение Правителю страны, тому так понравилась игра, 
 что он позволил изобретателю право самому выбрать награду. Мудрец 
 попросил у Повелителя за первую клетку шахматной доски заплатить ему 
 одно зерно риса, за второе — два, за третье — четыре и т. д., удваивая 
 количество зёрен на каждой следующей клетке. Помоги повелителю сосчитать 
 сколько зерен на какой клетке лежит.
 Необходимо составить функцию, которая определяет, сколько зерен попросил 
 положить на N-ую клетку изобретатель шахмат 
 (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …)
 */

#include <stdio.h>
unsigned long long int mul(int n)
{
	int i;
	unsigned long long int m = 1;
	for (i=2; i<=n; i++){
		m *= 2;
	};
	return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%llu",mul(n));
    return 0;
}
