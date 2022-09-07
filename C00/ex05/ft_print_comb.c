/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 02:33:47 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/07 02:34:52 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)

{
	int i;
	int j;
	int k;

	i = 0;
	while (i < '9')
	{
		j = i + 1;
		while (j <= '9')
		{	
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (!(i == '7' && j == '8' && k == '9'))
					write(1, ", ", 2);
				++k; 
			}
			++j;
		}
		++i;
	}
}
/*
int main()

{
	ft_print_comb();
	return ('0');
}
*/
