#include <stdio.h>

int main()
{
	int a[10][10];

	a[0][3] = 12;
	a[1][0] = 1234;
	a[9][7] = 15;
	a[3][6] = a[0][6];
	printf("%d\n", a[3][6]);

}
