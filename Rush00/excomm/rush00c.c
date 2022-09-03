/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:15:18 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/03 23:16:23 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void middle(int x, int y)

{
	int i;
	int count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;

			}
			if (x > 1)
				ft_putchar('*');
			++count;
		}
	}
}

void	end(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('\\');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('*');
			++i;
		}
		if (x > 1)
			ft_putchar('/');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('/');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('*');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('\\');
	middle(x, y);
	end(x, y);
}
