/*
Ввести номер месяца и вывести название времени года.
winter, spring, summer, autumn
*/

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	switch (a)
	{
	case 1: case 2: case 12: 	{
								printf("%s","winter");
								break;
								}
	case 3: case 4: case 5: 	{
								printf("%s","spring");
								break;
								}
	case 6: case 7: case 8: 	{
								printf("%s","summer");
								break;
								}
	case 9: case 10: case 11: 	{
								printf("%s","autumn");
								break;
								}
	}
    return 0;
}

