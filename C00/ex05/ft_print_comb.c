#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int a, int b, int c)

{
	char 	chr;

	chr = a + 48;
	write(1, &chr, 1);
	chr = b + 48;
	write(1, &chr, 1);
	chr = c + 48;
	write(1, &chr, 1);
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);

}

void ft_print_comb(void)

{
	int i;
	int	j;
	int	k;

	i= 0;
	while (i < 10)
	
	{
			j = i + 1;
			while (j < 10)
			{
				k = j + 1;
				while (k < 10)
				{
					ft_display(i, j, k);
					k++;
				}
				j++;
			}j++;
		}
}



int main()

{
	ft_print_comb();
	return('0');
}
