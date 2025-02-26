/*
 Проверить число на простоту.
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a, i, sq = 0;
	scanf("%d",&a);
	sq = rint(sqrt(a));
	if (a == 1) {
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
