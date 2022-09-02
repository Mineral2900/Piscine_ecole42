#include <stdio.h>

int main()
{
	char c;

	c = 'k';					 ## = c '\n';
	printf("%lu\n", sizeof(c), c, c);		 ## = printf("%lu %d %c\n", sizeof(c), c, c);

	char 	c;
	int 	i;
	float	f;
	double 	d;

	printf("%lu\n", sizeof(f));
	
}
